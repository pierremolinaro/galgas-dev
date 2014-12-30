#ifndef all_2D_declarations_2D__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-0.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalSendSearchListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSendSearchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalSendSearchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalSendSearchListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mAttributeName,
                                                  const class GALGAS_lstring & in_mSearchListName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSendSearchListAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalSendSearchListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_lexicalSendSearchListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_lexicalSendSearchListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSendSearchListAST operator_concat (const GALGAS_lexicalSendSearchListAST & inOperand
                                                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSendSearchListAST add_operation (const GALGAS_lexicalSendSearchListAST & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSendSearchListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSendSearchListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalSendSearchListAST ;
 
} ; // End of GALGAS_lexicalSendSearchListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalSendSearchListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSearchListName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalSendSearchListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendSearchListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @lexicalSendSearchListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSendSearchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mAttributeName ;
  public : GALGAS_lstring mAttribute_mSearchListName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalSendSearchListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalSendSearchListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalSendSearchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalSendSearchListAST_2D_element (const GALGAS_lstring & in_mAttributeName,
                                                       const GALGAS_lstring & in_mSearchListName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSendSearchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalSendSearchListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalSendSearchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSearchListName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSendSearchListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendSearchListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalWhileBranchListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalWhileBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalWhileBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalWhileBranchListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                  const class GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalWhileBranchListAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalWhileBranchListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_lexicalWhileBranchListAST constructor_listWithValue (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                              const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_lexicalWhileBranchListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                      const class GALGAS_lexicalInstructionListAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalWhileBranchListAST operator_concat (const GALGAS_lexicalWhileBranchListAST & inOperand
                                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalWhileBranchListAST add_operation (const GALGAS_lexicalWhileBranchListAST & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lexicalExpressionAST constinArgument0,
                                                         class GALGAS_lexicalInstructionListAST constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lexicalExpressionAST & outArgument0,
                                                    class GALGAS_lexicalInstructionListAST & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lexicalExpressionAST & outArgument0,
                                                   class GALGAS_lexicalInstructionListAST & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lexicalExpressionAST & outArgument0,
                                                         class GALGAS_lexicalInstructionListAST & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalExpressionAST & outArgument0,
                                               class GALGAS_lexicalInstructionListAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalExpressionAST & outArgument0,
                                              class GALGAS_lexicalInstructionListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalWhileBranchListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalWhileBranchListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalWhileBranchListAST ;
 
} ; // End of GALGAS_lexicalWhileBranchListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalWhileBranchListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalWhileBranchListAST (const GALGAS_lexicalWhileBranchListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lexicalExpressionAST current_mWhileExpression (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalInstructionListAST current_mWhileInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalWhileBranchListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @lexicalExpressionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExpressionAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_lexicalExpressionAST (void) ;

//---
  public : inline const class cPtr_lexicalExpressionAST * ptr (void) const { return (const cPtr_lexicalExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalExpressionAST (const cPtr_lexicalExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExpressionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @lexicalExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalExpressionAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_lexicalExpressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexicalWhileBranchListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalWhileBranchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalExpressionAST mAttribute_mWhileExpression ;
  public : GALGAS_lexicalInstructionListAST mAttribute_mWhileInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalWhileBranchListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalWhileBranchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalWhileBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                        const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalWhileBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalWhileBranchListAST_2D_element constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                               const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalWhileBranchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExpressionAST reader_mWhileExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST reader_mWhileInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalWhileBranchListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalSelectBranchListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSelectBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalSelectBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalSelectBranchListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                  const class GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSelectBranchListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalSelectBranchListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_lexicalSelectBranchListAST constructor_listWithValue (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                               const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_lexicalSelectBranchListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                      const class GALGAS_lexicalInstructionListAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSelectBranchListAST operator_concat (const GALGAS_lexicalSelectBranchListAST & inOperand
                                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSelectBranchListAST add_operation (const GALGAS_lexicalSelectBranchListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lexicalExpressionAST constinArgument0,
                                                         class GALGAS_lexicalInstructionListAST constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lexicalExpressionAST & outArgument0,
                                                    class GALGAS_lexicalInstructionListAST & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lexicalExpressionAST & outArgument0,
                                                   class GALGAS_lexicalInstructionListAST & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lexicalExpressionAST & outArgument0,
                                                         class GALGAS_lexicalInstructionListAST & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalExpressionAST & outArgument0,
                                               class GALGAS_lexicalInstructionListAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalExpressionAST & outArgument0,
                                              class GALGAS_lexicalInstructionListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSelectBranchListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSelectBranchListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalSelectBranchListAST ;
 
} ; // End of GALGAS_lexicalSelectBranchListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalSelectBranchListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalSelectBranchListAST (const GALGAS_lexicalSelectBranchListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lexicalExpressionAST current_mSelectExpression (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalInstructionListAST current_mSelectInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalSelectBranchListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexicalSelectBranchListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSelectBranchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalExpressionAST mAttribute_mSelectExpression ;
  public : GALGAS_lexicalInstructionListAST mAttribute_mSelectInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalSelectBranchListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalSelectBranchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalSelectBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                         const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSelectBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalSelectBranchListAST_2D_element constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                                const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalSelectBranchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExpressionAST reader_mSelectExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST reader_mSelectInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSelectBranchListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexicalRoutineCallActualArgumentListAST list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineCallActualArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalRoutineCallActualArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalRoutineCallActualArgumentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineCallActualArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalRoutineCallActualArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_lexicalRoutineCallActualArgumentListAST constructor_listWithValue (const class GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_lexicalRoutineCallActualArgumentListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalRoutineCallActualArgumentListAST operator_concat (const GALGAS_lexicalRoutineCallActualArgumentListAST & inOperand
                                                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalRoutineCallActualArgumentListAST add_operation (const GALGAS_lexicalRoutineCallActualArgumentListAST & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_abstractLexicalRoutineActualArgumentAST constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractLexicalRoutineActualArgumentAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineCallActualArgumentListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineCallActualArgumentListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalRoutineCallActualArgumentListAST ;
 
} ; // End of GALGAS_lexicalRoutineCallActualArgumentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalRoutineCallActualArgumentListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalRoutineCallActualArgumentListAST (const GALGAS_lexicalRoutineCallActualArgumentListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractLexicalRoutineActualArgumentAST current_mLexicalRoutineActualArgument (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @abstractLexicalRoutineActualArgumentAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractLexicalRoutineActualArgumentAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractLexicalRoutineActualArgumentAST (void) ;

//---
  public : inline const class cPtr_abstractLexicalRoutineActualArgumentAST * ptr (void) const { return (const cPtr_abstractLexicalRoutineActualArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractLexicalRoutineActualArgumentAST (const cPtr_abstractLexicalRoutineActualArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractLexicalRoutineActualArgumentAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mActualPassingModeLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractLexicalRoutineActualArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @abstractLexicalRoutineActualArgumentAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractLexicalRoutineActualArgumentAST : public acPtr_class {
//--- Attributes
  public : GALGAS_location mAttribute_mActualPassingModeLocation ;

//--- Constructor
  public : cPtr_abstractLexicalRoutineActualArgumentAST (const GALGAS_location & in_mActualPassingModeLocation
                                                         COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mActualPassingModeLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @lexicalRoutineCallActualArgumentListAST_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractLexicalRoutineActualArgumentAST mAttribute_mLexicalRoutineActualArgument ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element constructor_new (const class GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractLexicalRoutineActualArgumentAST reader_mLexicalRoutineActualArgument (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalFunctionCallActualArgumentListAST list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFunctionCallActualArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalFunctionCallActualArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalFunctionCallActualArgumentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFunctionCallActualArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalFunctionCallActualArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_lexicalFunctionCallActualArgumentListAST constructor_listWithValue (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalFunctionCallActualArgumentListAST operator_concat (const GALGAS_lexicalFunctionCallActualArgumentListAST & inOperand
                                                                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalFunctionCallActualArgumentListAST add_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST & inOperand,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionCallActualArgumentListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionCallActualArgumentListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalFunctionCallActualArgumentListAST ;
 
} ; // End of GALGAS_lexicalFunctionCallActualArgumentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalFunctionCallActualArgumentListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalFunctionCallActualArgumentListAST & inEnumeratedObject,
                                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST current_mLexicalActualInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @lexicalRoutineOrFunctionFormalInputArgumentAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (void) ;

//---
  public : inline const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * ptr (void) const { return (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @lexicalRoutineOrFunctionFormalInputArgumentAST class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @lexicalFunctionCallActualArgumentListAST_2D_element struct                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST mAttribute_mLexicalActualInputArgument ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element constructor_new (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST reader_mLexicalActualInputArgument (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalArgumentModeAST enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalArgumentModeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_lexicalArgumentModeAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_lexicalInputMode,
    kEnum_lexicalInputOutputMode
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
  public : static GALGAS_lexicalArgumentModeAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalArgumentModeAST constructor_lexicalInputMode (LOCATION_ARGS) ;

  public : static GALGAS_lexicalArgumentModeAST constructor_lexicalInputOutputMode (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalArgumentModeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isLexicalInputMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isLexicalInputOutputMode (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalArgumentModeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalArgumentModeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalExternRoutineFormalArgumentListAST list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExternRoutineFormalArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalExternRoutineFormalArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalExternRoutineFormalArgumentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lexicalArgumentModeAST & in_mPassingMode,
                                                  const class GALGAS_lstring & in_mLexicalTypeName,
                                                  const class GALGAS_lstring & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExternRoutineFormalArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalExternRoutineFormalArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_lexicalExternRoutineFormalArgumentListAST constructor_listWithValue (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                              const class GALGAS_lstring & inOperand1,
                                                                                              const class GALGAS_lstring & inOperand2
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_lexicalExternRoutineFormalArgumentListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalExternRoutineFormalArgumentListAST operator_concat (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand
                                                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalExternRoutineFormalArgumentListAST add_operation (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lexicalArgumentModeAST constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_lstring constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExternRoutineFormalArgumentListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExternRoutineFormalArgumentListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalExternRoutineFormalArgumentListAST ;
 
} ; // End of GALGAS_lexicalExternRoutineFormalArgumentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalExternRoutineFormalArgumentListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lexicalArgumentModeAST current_mPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mLexicalTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @lexicalExternRoutineFormalArgumentListAST_2D_element struct                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalArgumentModeAST mAttribute_mPassingMode ;
  public : GALGAS_lstring mAttribute_mLexicalTypeName ;
  public : GALGAS_lstring mAttribute_mFormalArgumentName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (const GALGAS_lexicalArgumentModeAST & in_mPassingMode,
                                                                        const GALGAS_lstring & in_mLexicalTypeName,
                                                                        const GALGAS_lstring & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element constructor_new (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1,
                                                                                               const class GALGAS_lstring & inOperand2
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLexicalTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalArgumentModeAST reader_mPassingMode (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externRoutineListAST list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externRoutineListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_externRoutineListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_externRoutineListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mRoutineName,
                                                  const class GALGAS_lexicalExternRoutineFormalArgumentListAST & in_mLexicalRoutineFormalArgumentList,
                                                  const class GALGAS_stringlist & in_mErrorMessageList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externRoutineListAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_externRoutineListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_externRoutineListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                                         const class GALGAS_stringlist & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_externRoutineListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                      const class GALGAS_stringlist & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_externRoutineListAST operator_concat (const GALGAS_externRoutineListAST & inOperand
                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_externRoutineListAST add_operation (const GALGAS_externRoutineListAST & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lexicalExternRoutineFormalArgumentListAST constinArgument1,
                                                         class GALGAS_stringlist constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                                    class GALGAS_stringlist & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                                   class GALGAS_stringlist & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                                         class GALGAS_stringlist & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                               class GALGAS_stringlist & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                              class GALGAS_stringlist & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_externRoutineListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externRoutineListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externRoutineListAST ;
 
} ; // End of GALGAS_externRoutineListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externRoutineListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_externRoutineListAST (const GALGAS_externRoutineListAST & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalExternRoutineFormalArgumentListAST current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mErrorMessageList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externRoutineListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @externRoutineListAST_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externRoutineListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mRoutineName ;
  public : GALGAS_lexicalExternRoutineFormalArgumentListAST mAttribute_mLexicalRoutineFormalArgumentList ;
  public : GALGAS_stringlist mAttribute_mErrorMessageList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externRoutineListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_externRoutineListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_externRoutineListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externRoutineListAST_2D_element (const GALGAS_lstring & in_mRoutineName,
                                                   const GALGAS_lexicalExternRoutineFormalArgumentListAST & in_mLexicalRoutineFormalArgumentList,
                                                   const GALGAS_stringlist & in_mErrorMessageList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externRoutineListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_externRoutineListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                                          const class GALGAS_stringlist & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externRoutineListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mErrorMessageList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExternRoutineFormalArgumentListAST reader_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externRoutineListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @lexicalExternFunctionFormalArgumentListAST list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExternFunctionFormalArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalExternFunctionFormalArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalExternFunctionFormalArgumentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLexicalTypeName,
                                                  const class GALGAS_lstring & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExternFunctionFormalArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalExternFunctionFormalArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_lexicalExternFunctionFormalArgumentListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_lexicalExternFunctionFormalArgumentListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalExternFunctionFormalArgumentListAST operator_concat (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand
                                                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalExternFunctionFormalArgumentListAST add_operation (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExternFunctionFormalArgumentListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExternFunctionFormalArgumentListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalExternFunctionFormalArgumentListAST ;
 
} ; // End of GALGAS_lexicalExternFunctionFormalArgumentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalExternFunctionFormalArgumentListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inEnumeratedObject,
                                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mLexicalTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @lexicalExternFunctionFormalArgumentListAST_2D_element struct                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mLexicalTypeName ;
  public : GALGAS_lstring mAttribute_mFormalArgumentName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (const GALGAS_lstring & in_mLexicalTypeName,
                                                                         const GALGAS_lstring & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_lstring & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLexicalTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externFunctionListAST list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externFunctionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_externFunctionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_externFunctionListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFunctionName,
                                                  const class GALGAS_lexicalExternFunctionFormalArgumentListAST & in_mLexicalFunctionFormalArgumentList,
                                                  const class GALGAS_lstring & in_mReturnedTypeName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externFunctionListAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_externFunctionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_externFunctionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_externFunctionListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_externFunctionListAST operator_concat (const GALGAS_externFunctionListAST & inOperand
                                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_externFunctionListAST add_operation (const GALGAS_externFunctionListAST & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lexicalExternFunctionFormalArgumentListAST constinArgument1,
                                                         class GALGAS_lstring constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_externFunctionListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externFunctionListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externFunctionListAST ;
 
} ; // End of GALGAS_externFunctionListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externFunctionListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_externFunctionListAST (const GALGAS_externFunctionListAST & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalExternFunctionFormalArgumentListAST current_mLexicalFunctionFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mReturnedTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externFunctionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @externFunctionListAST_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externFunctionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFunctionName ;
  public : GALGAS_lexicalExternFunctionFormalArgumentListAST mAttribute_mLexicalFunctionFormalArgumentList ;
  public : GALGAS_lstring mAttribute_mReturnedTypeName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externFunctionListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_externFunctionListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_externFunctionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externFunctionListAST_2D_element (const GALGAS_lstring & in_mFunctionName,
                                                    const GALGAS_lexicalExternFunctionFormalArgumentListAST & in_mLexicalFunctionFormalArgumentList,
                                                    const GALGAS_lstring & in_mReturnedTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externFunctionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_externFunctionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externFunctionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExternFunctionFormalArgumentListAST reader_mLexicalFunctionFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mReturnedTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externFunctionListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @indexingListAST list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_indexingListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_indexingListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_indexingListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mIndexName,
                                                  const class GALGAS_lstring & in_mIndexComment
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_indexingListAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_indexingListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_indexingListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_indexingListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_indexingListAST operator_concat (const GALGAS_indexingListAST & inOperand
                                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_indexingListAST add_operation (const GALGAS_indexingListAST & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_indexingListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_indexingListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_indexingListAST ;
 
} ; // End of GALGAS_indexingListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_indexingListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_indexingListAST (const GALGAS_indexingListAST & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mIndexName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mIndexComment (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_indexingListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_indexingListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @indexingListAST_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_indexingListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mIndexName ;
  public : GALGAS_lstring mAttribute_mIndexComment ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_indexingListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_indexingListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_indexingListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_indexingListAST_2D_element (const GALGAS_lstring & in_mIndexName,
                                              const GALGAS_lstring & in_mIndexComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_indexingListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_indexingListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_indexingListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mIndexComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mIndexName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_indexingListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_indexingListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @galgas3LexiqueComponentListAST list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_LexiqueComponentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_galgas_33_LexiqueComponentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_galgas_33_LexiqueComponentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLexiqueComponentName,
                                                  const class GALGAS_bool & in_mIsTemplate,
                                                  const class GALGAS_metamodelTemplateDelimitorListAST & in_mTemplateDelimitorList,
                                                  const class GALGAS_templateReplacementListAST & in_mTemplateReplacementList,
                                                  const class GALGAS_lexicalAttributeListAST & in_mLexicalAttributeList,
                                                  const class GALGAS_lexicalStyleListAST & in_mLexicalStyleList,
                                                  const class GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationList,
                                                  const class GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationList,
                                                  const class GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationList,
                                                  const class GALGAS_lexicalRuleListAST & in_mLexicalRuleList,
                                                  const class GALGAS_externRoutineListAST & in_mExternRoutineList,
                                                  const class GALGAS_externFunctionListAST & in_mExternFunctionList,
                                                  const class GALGAS_indexingListAST & in_mIndexingListAST,
                                                  const class GALGAS_lstring & in_mIndexingDirectory
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_LexiqueComponentListAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_galgas_33_LexiqueComponentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_galgas_33_LexiqueComponentListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_bool & inOperand1,
                                                                                      const class GALGAS_metamodelTemplateDelimitorListAST & inOperand2,
                                                                                      const class GALGAS_templateReplacementListAST & inOperand3,
                                                                                      const class GALGAS_lexicalAttributeListAST & inOperand4,
                                                                                      const class GALGAS_lexicalStyleListAST & inOperand5,
                                                                                      const class GALGAS_terminalDeclarationListAST & inOperand6,
                                                                                      const class GALGAS_lexicalMessageDeclarationListAST & inOperand7,
                                                                                      const class GALGAS_lexicalListDeclarationListAST & inOperand8,
                                                                                      const class GALGAS_lexicalRuleListAST & inOperand9,
                                                                                      const class GALGAS_externRoutineListAST & inOperand10,
                                                                                      const class GALGAS_externFunctionListAST & inOperand11,
                                                                                      const class GALGAS_indexingListAST & inOperand12,
                                                                                      const class GALGAS_lstring & inOperand13
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_galgas_33_LexiqueComponentListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_metamodelTemplateDelimitorListAST & inOperand2,
                                                      const class GALGAS_templateReplacementListAST & inOperand3,
                                                      const class GALGAS_lexicalAttributeListAST & inOperand4,
                                                      const class GALGAS_lexicalStyleListAST & inOperand5,
                                                      const class GALGAS_terminalDeclarationListAST & inOperand6,
                                                      const class GALGAS_lexicalMessageDeclarationListAST & inOperand7,
                                                      const class GALGAS_lexicalListDeclarationListAST & inOperand8,
                                                      const class GALGAS_lexicalRuleListAST & inOperand9,
                                                      const class GALGAS_externRoutineListAST & inOperand10,
                                                      const class GALGAS_externFunctionListAST & inOperand11,
                                                      const class GALGAS_indexingListAST & inOperand12,
                                                      const class GALGAS_lstring & inOperand13
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_LexiqueComponentListAST operator_concat (const GALGAS_galgas_33_LexiqueComponentListAST & inOperand
                                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_galgas_33_LexiqueComponentListAST add_operation (const GALGAS_galgas_33_LexiqueComponentListAST & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_bool constinArgument1,
                                                         class GALGAS_metamodelTemplateDelimitorListAST constinArgument2,
                                                         class GALGAS_templateReplacementListAST constinArgument3,
                                                         class GALGAS_lexicalAttributeListAST constinArgument4,
                                                         class GALGAS_lexicalStyleListAST constinArgument5,
                                                         class GALGAS_terminalDeclarationListAST constinArgument6,
                                                         class GALGAS_lexicalMessageDeclarationListAST constinArgument7,
                                                         class GALGAS_lexicalListDeclarationListAST constinArgument8,
                                                         class GALGAS_lexicalRuleListAST constinArgument9,
                                                         class GALGAS_externRoutineListAST constinArgument10,
                                                         class GALGAS_externFunctionListAST constinArgument11,
                                                         class GALGAS_indexingListAST constinArgument12,
                                                         class GALGAS_lstring constinArgument13,
                                                         class GALGAS_uint constinArgument14,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_bool & outArgument1,
                                                    class GALGAS_metamodelTemplateDelimitorListAST & outArgument2,
                                                    class GALGAS_templateReplacementListAST & outArgument3,
                                                    class GALGAS_lexicalAttributeListAST & outArgument4,
                                                    class GALGAS_lexicalStyleListAST & outArgument5,
                                                    class GALGAS_terminalDeclarationListAST & outArgument6,
                                                    class GALGAS_lexicalMessageDeclarationListAST & outArgument7,
                                                    class GALGAS_lexicalListDeclarationListAST & outArgument8,
                                                    class GALGAS_lexicalRuleListAST & outArgument9,
                                                    class GALGAS_externRoutineListAST & outArgument10,
                                                    class GALGAS_externFunctionListAST & outArgument11,
                                                    class GALGAS_indexingListAST & outArgument12,
                                                    class GALGAS_lstring & outArgument13,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   class GALGAS_metamodelTemplateDelimitorListAST & outArgument2,
                                                   class GALGAS_templateReplacementListAST & outArgument3,
                                                   class GALGAS_lexicalAttributeListAST & outArgument4,
                                                   class GALGAS_lexicalStyleListAST & outArgument5,
                                                   class GALGAS_terminalDeclarationListAST & outArgument6,
                                                   class GALGAS_lexicalMessageDeclarationListAST & outArgument7,
                                                   class GALGAS_lexicalListDeclarationListAST & outArgument8,
                                                   class GALGAS_lexicalRuleListAST & outArgument9,
                                                   class GALGAS_externRoutineListAST & outArgument10,
                                                   class GALGAS_externFunctionListAST & outArgument11,
                                                   class GALGAS_indexingListAST & outArgument12,
                                                   class GALGAS_lstring & outArgument13,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_bool & outArgument1,
                                                         class GALGAS_metamodelTemplateDelimitorListAST & outArgument2,
                                                         class GALGAS_templateReplacementListAST & outArgument3,
                                                         class GALGAS_lexicalAttributeListAST & outArgument4,
                                                         class GALGAS_lexicalStyleListAST & outArgument5,
                                                         class GALGAS_terminalDeclarationListAST & outArgument6,
                                                         class GALGAS_lexicalMessageDeclarationListAST & outArgument7,
                                                         class GALGAS_lexicalListDeclarationListAST & outArgument8,
                                                         class GALGAS_lexicalRuleListAST & outArgument9,
                                                         class GALGAS_externRoutineListAST & outArgument10,
                                                         class GALGAS_externFunctionListAST & outArgument11,
                                                         class GALGAS_indexingListAST & outArgument12,
                                                         class GALGAS_lstring & outArgument13,
                                                         class GALGAS_uint constinArgument14,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               class GALGAS_metamodelTemplateDelimitorListAST & outArgument2,
                                               class GALGAS_templateReplacementListAST & outArgument3,
                                               class GALGAS_lexicalAttributeListAST & outArgument4,
                                               class GALGAS_lexicalStyleListAST & outArgument5,
                                               class GALGAS_terminalDeclarationListAST & outArgument6,
                                               class GALGAS_lexicalMessageDeclarationListAST & outArgument7,
                                               class GALGAS_lexicalListDeclarationListAST & outArgument8,
                                               class GALGAS_lexicalRuleListAST & outArgument9,
                                               class GALGAS_externRoutineListAST & outArgument10,
                                               class GALGAS_externFunctionListAST & outArgument11,
                                               class GALGAS_indexingListAST & outArgument12,
                                               class GALGAS_lstring & outArgument13,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_metamodelTemplateDelimitorListAST & outArgument2,
                                              class GALGAS_templateReplacementListAST & outArgument3,
                                              class GALGAS_lexicalAttributeListAST & outArgument4,
                                              class GALGAS_lexicalStyleListAST & outArgument5,
                                              class GALGAS_terminalDeclarationListAST & outArgument6,
                                              class GALGAS_lexicalMessageDeclarationListAST & outArgument7,
                                              class GALGAS_lexicalListDeclarationListAST & outArgument8,
                                              class GALGAS_lexicalRuleListAST & outArgument9,
                                              class GALGAS_externRoutineListAST & outArgument10,
                                              class GALGAS_externFunctionListAST & outArgument11,
                                              class GALGAS_indexingListAST & outArgument12,
                                              class GALGAS_lstring & outArgument13,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_externFunctionListAST reader_mExternFunctionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externRoutineListAST reader_mExternRoutineListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mIndexingDirectoryAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_indexingListAST reader_mIndexingListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsTemplateAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeListAST reader_mLexicalAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST reader_mLexicalListDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST reader_mLexicalMessageDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST reader_mLexicalRuleListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalStyleListAST reader_mLexicalStyleListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLexiqueComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_metamodelTemplateDelimitorListAST reader_mTemplateDelimitorListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateReplacementListAST reader_mTemplateReplacementListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalDeclarationListAST reader_mTerminalDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_LexiqueComponentListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_galgas_33_LexiqueComponentListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_LexiqueComponentListAST ;
 
} ; // End of GALGAS_galgas_33_LexiqueComponentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_galgas_33_LexiqueComponentListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_galgas_33_LexiqueComponentListAST (const GALGAS_galgas_33_LexiqueComponentListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mLexiqueComponentName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsTemplate (LOCATION_ARGS) const ;
  public : class GALGAS_metamodelTemplateDelimitorListAST current_mTemplateDelimitorList (LOCATION_ARGS) const ;
  public : class GALGAS_templateReplacementListAST current_mTemplateReplacementList (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalAttributeListAST current_mLexicalAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalStyleListAST current_mLexicalStyleList (LOCATION_ARGS) const ;
  public : class GALGAS_terminalDeclarationListAST current_mTerminalDeclarationList (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalMessageDeclarationListAST current_mLexicalMessageDeclarationList (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalListDeclarationListAST current_mLexicalListDeclarationList (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalRuleListAST current_mLexicalRuleList (LOCATION_ARGS) const ;
  public : class GALGAS_externRoutineListAST current_mExternRoutineList (LOCATION_ARGS) const ;
  public : class GALGAS_externFunctionListAST current_mExternFunctionList (LOCATION_ARGS) const ;
  public : class GALGAS_indexingListAST current_mIndexingListAST (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mIndexingDirectory (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_galgas_33_LexiqueComponentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_LexiqueComponentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @galgas_33_LexiqueComponentListAST_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_LexiqueComponentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
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


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_LexiqueComponentListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_galgas_33_LexiqueComponentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_galgas_33_LexiqueComponentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_galgas_33_LexiqueComponentListAST_2D_element (const GALGAS_lstring & in_mLexiqueComponentName,
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
                                                                const GALGAS_lstring & in_mIndexingDirectory) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_LexiqueComponentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_galgas_33_LexiqueComponentListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_bool & inOperand1,
                                                                                       const class GALGAS_metamodelTemplateDelimitorListAST & inOperand2,
                                                                                       const class GALGAS_templateReplacementListAST & inOperand3,
                                                                                       const class GALGAS_lexicalAttributeListAST & inOperand4,
                                                                                       const class GALGAS_lexicalStyleListAST & inOperand5,
                                                                                       const class GALGAS_terminalDeclarationListAST & inOperand6,
                                                                                       const class GALGAS_lexicalMessageDeclarationListAST & inOperand7,
                                                                                       const class GALGAS_lexicalListDeclarationListAST & inOperand8,
                                                                                       const class GALGAS_lexicalRuleListAST & inOperand9,
                                                                                       const class GALGAS_externRoutineListAST & inOperand10,
                                                                                       const class GALGAS_externFunctionListAST & inOperand11,
                                                                                       const class GALGAS_indexingListAST & inOperand12,
                                                                                       const class GALGAS_lstring & inOperand13
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_LexiqueComponentListAST_2D_element & inOperand) const ;

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
 
} ; // End of GALGAS_galgas_33_LexiqueComponentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_LexiqueComponentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @lexicalTypeEnum enum                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTypeEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_lexicalTypeEnum (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_lexicalType_5F_string,
    kEnum_lexicalType_5F_char,
    kEnum_lexicalType_5F_uint,
    kEnum_lexicalType_5F_uint_36__34_,
    kEnum_lexicalType_5F_sint,
    kEnum_lexicalType_5F_sint_36__34_,
    kEnum_lexicalType_5F_double
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
  public : static GALGAS_lexicalTypeEnum extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalTypeEnum constructor_lexicalType_5F_char (LOCATION_ARGS) ;

  public : static GALGAS_lexicalTypeEnum constructor_lexicalType_5F_double (LOCATION_ARGS) ;

  public : static GALGAS_lexicalTypeEnum constructor_lexicalType_5F_sint (LOCATION_ARGS) ;

  public : static GALGAS_lexicalTypeEnum constructor_lexicalType_5F_sint_36__34_ (LOCATION_ARGS) ;

  public : static GALGAS_lexicalTypeEnum constructor_lexicalType_5F_string (LOCATION_ARGS) ;

  public : static GALGAS_lexicalTypeEnum constructor_lexicalType_5F_uint (LOCATION_ARGS) ;

  public : static GALGAS_lexicalTypeEnum constructor_lexicalType_5F_uint_36__34_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalTypeEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isLexicalType_5F_char (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isLexicalType_5F_double (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isLexicalType_5F_sint (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isLexicalType_5F_sint_36__34_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isLexicalType_5F_string (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isLexicalType_5F_uint (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isLexicalType_5F_uint_36__34_ (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalTypeEnum class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeEnum ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @lexicalSentValueList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSentValueList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalSentValueList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalSentValueList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mLexicalFormalSelector,
                                                  const class GALGAS_string & in_mLexicalAttributeName,
                                                  const class GALGAS_lexicalTypeEnum & in_mLexicalType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSentValueList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalSentValueList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_lexicalSentValueList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_lexicalTypeEnum & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_lexicalSentValueList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_lexicalTypeEnum & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSentValueList operator_concat (const GALGAS_lexicalSentValueList & inOperand
                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSentValueList add_operation (const GALGAS_lexicalSentValueList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_lexicalTypeEnum constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_lexicalTypeEnum & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_lexicalTypeEnum & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_lexicalTypeEnum & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_lexicalTypeEnum & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_lexicalTypeEnum & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLexicalAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLexicalFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum reader_mLexicalTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalSentValueList ;
 
} ; // End of GALGAS_lexicalSentValueList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalSentValueList : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalSentValueList (const GALGAS_lexicalSentValueList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mLexicalFormalSelector (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mLexicalAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalSentValueList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSentValueList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalSentValueList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSentValueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mLexicalFormalSelector ;
  public : GALGAS_string mAttribute_mLexicalAttributeName ;
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalSentValueList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalSentValueList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalSentValueList_2D_element (const GALGAS_lstring & in_mLexicalFormalSelector,
                                                   const GALGAS_string & in_mLexicalAttributeName,
                                                   const GALGAS_lexicalTypeEnum & in_mLexicalType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSentValueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalSentValueList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_lexicalTypeEnum & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalSentValueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLexicalAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLexicalFormalSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum reader_mLexicalType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSentValueList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSentValueList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @terminalMap map                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_terminalMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_terminalMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_terminalMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_terminalMap (const GALGAS_terminalMap & inSource) ;
  public : GALGAS_terminalMap & operator = (const GALGAS_terminalMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalMap extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_terminalMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_terminalMap constructor_mapWithMapToOverride (const class GALGAS_terminalMap & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalSentValueList & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_lexicalSentValueList constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMSentAttributeListForKey (class GALGAS_lexicalSentValueList constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalSentValueList & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList reader_mSentAttributeListForKey (const class GALGAS_string & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalMap reader_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_terminalMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_terminalMap ;
 
} ; // End of GALGAS_terminalMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_terminalMap : public cGenericAbstractEnumerator {
  public : cEnumerator_terminalMap (const GALGAS_terminalMap & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalSentValueList current_mSentAttributeList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_terminalMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@terminalMap' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_terminalMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalSentValueList mAttribute_mSentAttributeList ;

//--- Constructor
  public : cMapElement_terminalMap (const GALGAS_lstring & inKey,
                                    const GALGAS_lexicalSentValueList & in_mSentAttributeList
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
//                                           @terminalMap_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lexicalSentValueList mAttribute_mSentAttributeList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_terminalMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_terminalMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_terminalMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_terminalMap_2D_element (const GALGAS_lstring & in_lkey,
                                          const GALGAS_lexicalSentValueList & in_mSentAttributeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalMap_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_terminalMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_lexicalSentValueList & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList reader_mSentAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @lexicalTypeMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalTypeMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTypeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalTypeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalTypeMap (const GALGAS_lexicalTypeMap & inSource) ;
  public : GALGAS_lexicalTypeMap & operator = (const GALGAS_lexicalTypeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalTypeMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalTypeMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_lexicalTypeMap constructor_mapWithMapToOverride (const class GALGAS_lexicalTypeMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalTypeEnum & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_lexicalTypeEnum constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMLexicalTypeForKey (class GALGAS_lexicalTypeEnum constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalTypeEnum & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum reader_mLexicalTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeMap reader_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalTypeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalTypeMap ;
 
} ; // End of GALGAS_lexicalTypeMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalTypeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalTypeMap (const GALGAS_lexicalTypeMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalTypeMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@lexicalTypeMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalTypeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalType ;

//--- Constructor
  public : cMapElement_lexicalTypeMap (const GALGAS_lstring & inKey,
                                       const GALGAS_lexicalTypeEnum & in_mLexicalType
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
//                                          @lexicalTypeMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTypeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalTypeMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalTypeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalTypeMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_lexicalTypeEnum & in_mLexicalType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalTypeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalTypeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_lexicalTypeEnum & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalTypeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum reader_mLexicalType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalTypeMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalAttributeMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalAttributeMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalAttributeMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalAttributeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalAttributeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inSource) ;
  public : GALGAS_lexicalAttributeMap & operator = (const GALGAS_lexicalAttributeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalAttributeMap extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalAttributeMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_lexicalAttributeMap constructor_mapWithMapToOverride (const class GALGAS_lexicalAttributeMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalTypeEnum & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_lexicalTypeEnum constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMLexicalTypeForKey (class GALGAS_lexicalTypeEnum constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalTypeEnum & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum reader_mLexicalTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalAttributeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalAttributeMap ;
 
} ; // End of GALGAS_lexicalAttributeMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalAttributeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalAttributeMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@lexicalAttributeMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalAttributeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalType ;

//--- Constructor
  public : cMapElement_lexicalAttributeMap (const GALGAS_lstring & inKey,
                                            const GALGAS_lexicalTypeEnum & in_mLexicalType
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
//                                       @lexicalAttributeMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalAttributeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalAttributeMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalAttributeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalAttributeMap_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_lexicalTypeEnum & in_mLexicalType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalAttributeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalAttributeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lexicalTypeEnum & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalAttributeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum reader_mLexicalType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalAttributeMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Parser class 'lexiqueSyntax' declaration                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_lexiqueSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_lexiqueSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_extern_5F_routine_5F_or_5F_function_5F_declaration_ (class GALGAS_externRoutineListAST & ioArgument0,
                                                                                   class GALGAS_externFunctionListAST & ioArgument1,
                                                                                   class C_String & ioSyntaxDirectedTranslationResult,
                                                                                   class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_routine_5F_or_5F_function_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                                        class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_routine_5F_or_5F_function_5F_declaration_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_function_5F_call_5F_or_5F_attribute_ (const class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument1,
                                                                    class C_String & ioSyntaxDirectedTranslationResult,
                                                                    class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_function_5F_call_5F_or_5F_attribute_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                         class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_function_5F_call_5F_or_5F_attribute_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_attribute_5F_declaration_ (class GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                    class C_String & ioSyntaxDirectedTranslationResult,
                                                                    class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_attribute_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                         class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_attribute_5F_declaration_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_explicit_5F_rule_ (class GALGAS_lexicalRuleListAST & ioArgument0,
                                                            class C_String & ioSyntaxDirectedTranslationResult,
                                                            class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_explicit_5F_rule_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                 class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_explicit_5F_rule_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_expression_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                      class C_String & ioSyntaxDirectedTranslationResult,
                                                      class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_expression_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                           class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_expression_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_factor_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                  class C_String & ioSyntaxDirectedTranslationResult,
                                                  class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_factor_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                       class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_factor_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_implicit_5F_rule_ (class GALGAS_lexicalRuleListAST & ioArgument0,
                                                            class C_String & ioSyntaxDirectedTranslationResult,
                                                            class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_implicit_5F_rule_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                 class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_implicit_5F_rule_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_instruction_ (class GALGAS_lexicalInstructionListAST & ioArgument0,
                                                       class C_String & ioSyntaxDirectedTranslationResult,
                                                       class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_instruction_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                            class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_instruction_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_list_5F_declaration_ (class GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                               class C_String & ioSyntaxDirectedTranslationResult,
                                                               class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_list_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                    class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_list_5F_declaration_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_list_5F_entry_ (class GALGAS_lexicalListEntryListAST & ioArgument0,
                                                         class C_String & ioSyntaxDirectedTranslationResult,
                                                         class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_list_5F_entry_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                              class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_list_5F_entry_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_message_5F_declaration_ (class GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                  class C_String & ioSyntaxDirectedTranslationResult,
                                                                  class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_message_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                       class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_message_5F_declaration_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                           class C_String & ioSyntaxDirectedTranslationResult,
                                                                           class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                                class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_send_5F_instruction_ (class GALGAS_lexicalInstructionAST & outArgument0,
                                                               class C_String & ioSyntaxDirectedTranslationResult,
                                                               class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_send_5F_instruction_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                    class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_send_5F_instruction_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_term_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                class C_String & ioSyntaxDirectedTranslationResult,
                                                class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_term_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                     class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexical_5F_term_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexique_5F_component_5F_start_5F_symbol_ (class GALGAS_galgas_33_LexiqueComponentListAST_2D_element & outArgument0,
                                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                                        class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexique_5F_component_5F_start_5F_symbol_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                             class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_lexique_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_repeat_5F_while_5F_branch_ (class GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                          class C_String & ioSyntaxDirectedTranslationResult,
                                                          class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_repeat_5F_while_5F_branch_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                               class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_repeat_5F_while_5F_branch_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_style_5F_declaration_ (class GALGAS_lexicalStyleListAST & ioArgument0,
                                                     class C_String & ioSyntaxDirectedTranslationResult,
                                                     class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_style_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                          class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_style_5F_declaration_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_delimitor_ (class GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                      class C_String & ioSyntaxDirectedTranslationResult,
                                                      class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_delimitor_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                           class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_delimitor_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_replacement_ (class GALGAS_templateReplacementListAST & ioArgument0,
                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                        class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_replacement_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_template_5F_replacement_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_terminal_5F_declaration_ (class GALGAS_terminalDeclarationListAST & ioArgument0,
                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                        class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_terminal_5F_declaration_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_terminal_5F_declaration_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_lexiqueSyntax_lexique_5F_component_5F_start_5F_symbol_i0_ (GALGAS_galgas_33_LexiqueComponentListAST_2D_element & outArgument0,
                                                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexique_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexique_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_template_5F_delimitor_i1_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_template_5F_delimitor_i1_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_template_5F_delimitor_i1_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_template_5F_replacement_i2_ (GALGAS_templateReplacementListAST & ioArgument0,
                                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_template_5F_replacement_i2_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_template_5F_replacement_i2_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_message_5F_declaration_i3_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                             C_String & ioSyntaxDirectedTranslationResult,
                                                                             C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_message_5F_declaration_i3_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                  C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_message_5F_declaration_i3_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_implicit_5F_rule_i4_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_implicit_5F_rule_i4_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_implicit_5F_rule_i4_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_explicit_5F_rule_i5_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_explicit_5F_rule_i5_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_explicit_5F_rule_i5_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i6_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i6_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i6_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_send_5F_instruction_i7_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                                          C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_send_5F_instruction_i7_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                               C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_send_5F_instruction_i7_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_send_5F_instruction_i8_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                                          C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_send_5F_instruction_i8_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                               C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_send_5F_instruction_i8_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i9_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i9_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i9_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_repeat_5F_while_5F_branch_i10_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                                      C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_repeat_5F_while_5F_branch_i10_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                           C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_repeat_5F_while_5F_branch_i10_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i11_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i11_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i11_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i12_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i12_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i12_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i13_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i13_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i13_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i14_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i14_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i14_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i15_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i15_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i15_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i16_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                       C_String & ioSyntaxDirectedTranslationResult,
                                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i16_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_output_5F_effective_5F_argument_i16_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_function_5F_call_5F_or_5F_attribute_i17_ (const GALGAS_lstring constinArgument0,
                                                                                GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument1,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_function_5F_call_5F_or_5F_attribute_i17_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_function_5F_call_5F_or_5F_attribute_i17_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_function_5F_call_5F_or_5F_attribute_i18_ (const GALGAS_lstring constinArgument0,
                                                                                GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument1,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_function_5F_call_5F_or_5F_attribute_i18_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_function_5F_call_5F_or_5F_attribute_i18_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i19_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i19_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i19_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i20_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i20_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i20_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i21_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i21_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i21_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i22_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i22_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i22_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i23_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i23_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i23_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i24_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                   C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i24_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                        C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_instruction_i24_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_expression_i25_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                  C_String & ioSyntaxDirectedTranslationResult,
                                                                  C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_expression_i25_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                       C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_expression_i25_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_term_i26_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                            C_String & ioSyntaxDirectedTranslationResult,
                                                            C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_term_i26_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_term_i26_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_factor_i27_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_factor_i27_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_factor_i27_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_factor_i28_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_factor_i28_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_factor_i28_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_factor_i29_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_factor_i29_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_factor_i29_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_factor_i30_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                              C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_factor_i30_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                   C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_factor_i30_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_list_5F_declaration_i31_ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                                           C_String & ioSyntaxDirectedTranslationResult,
                                                                           C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_list_5F_declaration_i31_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_list_5F_declaration_i31_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_list_5F_entry_i32_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_list_5F_entry_i32_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                          C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_list_5F_entry_i32_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_attribute_5F_declaration_i33_ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                                C_String & ioSyntaxDirectedTranslationResult,
                                                                                C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_attribute_5F_declaration_i33_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_lexical_5F_attribute_5F_declaration_i33_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_terminal_5F_declaration_i34_ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                                    C_String & ioSyntaxDirectedTranslationResult,
                                                                    C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_terminal_5F_declaration_i34_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                         C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_terminal_5F_declaration_i34_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_style_5F_declaration_i35_ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_style_5F_declaration_i35_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_style_5F_declaration_i35_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_extern_5F_routine_5F_or_5F_function_5F_declaration_i36_ (GALGAS_externRoutineListAST & ioArgument0,
                                                                                               GALGAS_externFunctionListAST & ioArgument1,
                                                                                               C_String & ioSyntaxDirectedTranslationResult,
                                                                                               C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_extern_5F_routine_5F_or_5F_function_5F_declaration_i36_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                                    C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_lexiqueSyntax_extern_5F_routine_5F_or_5F_function_5F_declaration_i36_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_lexiqueSyntax_0 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_1 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_2 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_3 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_4 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_5 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_6 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_7 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_8 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_9 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_10 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_11 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_12 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_13 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_14 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_15 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_16 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_17 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_18 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_19 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_20 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_21 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_22 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_23 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_24 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_25 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_26 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_27 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_28 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_29 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_30 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_31 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_32 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_33 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_34 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_35 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_lexiqueSyntax_36 (C_Lexique_galgas_32_Scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalAttributeInputArgumentAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalAttributeInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Constructor
  public : GALGAS_lexicalAttributeInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalAttributeInputArgumentAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalAttributeInputArgumentAST * ptr (void) const { return (const cPtr_lexicalAttributeInputArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalAttributeInputArgumentAST (const cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalAttributeInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalAttributeInputArgumentAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalAttributeInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAttributeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalAttributeInputArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @lexicalAttributeInputArgumentAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalAttributeInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mAttributeName ;

//--- Constructor
  public : cPtr_lexicalAttributeInputArgumentAST (const GALGAS_lstring & in_mAttributeName
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAttributeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexicalAttributeInputOutputArgumentAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalAttributeInputOutputArgumentAST : public GALGAS_abstractLexicalRoutineActualArgumentAST {
//--- Constructor
  public : GALGAS_lexicalAttributeInputOutputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalAttributeInputOutputArgumentAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalAttributeInputOutputArgumentAST * ptr (void) const { return (const cPtr_lexicalAttributeInputOutputArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalAttributeInputOutputArgumentAST (const cPtr_lexicalAttributeInputOutputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalAttributeInputOutputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalAttributeInputOutputArgumentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalAttributeInputOutputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAttributeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalAttributeInputOutputArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @lexicalAttributeInputOutputArgumentAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalAttributeInputOutputArgumentAST : public cPtr_abstractLexicalRoutineActualArgumentAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mAttributeName ;

//--- Constructor
  public : cPtr_lexicalAttributeInputOutputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                                        const GALGAS_lstring & in_mAttributeName
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAttributeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalCharacterInputArgumentAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalCharacterInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Constructor
  public : GALGAS_lexicalCharacterInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalCharacterInputArgumentAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalCharacterInputArgumentAST * ptr (void) const { return (const cPtr_lexicalCharacterInputArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalCharacterInputArgumentAST (const cPtr_lexicalCharacterInputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalCharacterInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalCharacterInputArgumentAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lchar reader_mCharacter (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterInputArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @lexicalCharacterInputArgumentAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalCharacterInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Attributes
  public : GALGAS_lchar mAttribute_mCharacter ;

//--- Constructor
  public : cPtr_lexicalCharacterInputArgumentAST (const GALGAS_lchar & in_mCharacter
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
//                                       @lexicalCharacterIntervalMatchAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalCharacterIntervalMatchAST : public GALGAS_lexicalExpressionAST {
//--- Constructor
  public : GALGAS_lexicalCharacterIntervalMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalCharacterIntervalMatchAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalCharacterIntervalMatchAST * ptr (void) const { return (const cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalCharacterIntervalMatchAST (const cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalCharacterIntervalMatchAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalCharacterIntervalMatchAST constructor_new (const class GALGAS_lchar & inOperand0,
                                                                           const class GALGAS_lchar & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lchar reader_mLowerBound (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lchar reader_mUpperBound (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterIntervalMatchAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @lexicalCharacterIntervalMatchAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalCharacterIntervalMatchAST : public cPtr_lexicalExpressionAST {
//--- Attributes
  public : GALGAS_lchar mAttribute_mLowerBound ;
  public : GALGAS_lchar mAttribute_mUpperBound ;

//--- Constructor
  public : cPtr_lexicalCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                  const GALGAS_lchar & in_mUpperBound
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lchar reader_mLowerBound (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lchar reader_mUpperBound (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalCharacterMatchAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalCharacterMatchAST : public GALGAS_lexicalExpressionAST {
//--- Constructor
  public : GALGAS_lexicalCharacterMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalCharacterMatchAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalCharacterMatchAST * ptr (void) const { return (const cPtr_lexicalCharacterMatchAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalCharacterMatchAST (const cPtr_lexicalCharacterMatchAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalCharacterMatchAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalCharacterMatchAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalCharacterMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lchar reader_mCharacter (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterMatchAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @lexicalCharacterMatchAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalCharacterMatchAST : public cPtr_lexicalExpressionAST {
//--- Attributes
  public : GALGAS_lchar mAttribute_mCharacter ;

//--- Constructor
  public : cPtr_lexicalCharacterMatchAST (const GALGAS_lchar & in_mCharacter
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
//                                         @lexicalCharacterSetMatchAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalCharacterSetMatchAST : public GALGAS_lexicalExpressionAST {
//--- Constructor
  public : GALGAS_lexicalCharacterSetMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalCharacterSetMatchAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalCharacterSetMatchAST * ptr (void) const { return (const cPtr_lexicalCharacterSetMatchAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalCharacterSetMatchAST (const cPtr_lexicalCharacterSetMatchAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalCharacterSetMatchAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalCharacterSetMatchAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalCharacterSetMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mCharacterSetName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterSetMatchAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @lexicalCharacterSetMatchAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalCharacterSetMatchAST : public cPtr_lexicalExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mCharacterSetName ;

//--- Constructor
  public : cPtr_lexicalCharacterSetMatchAST (const GALGAS_lstring & in_mCharacterSetName
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mCharacterSetName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalCurrentCharacterInputArgumentAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalCurrentCharacterInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Constructor
  public : GALGAS_lexicalCurrentCharacterInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalCurrentCharacterInputArgumentAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalCurrentCharacterInputArgumentAST * ptr (void) const { return (const cPtr_lexicalCurrentCharacterInputArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalCurrentCharacterInputArgumentAST (const cPtr_lexicalCurrentCharacterInputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalCurrentCharacterInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalCurrentCharacterInputArgumentAST constructor_new (const class GALGAS_location & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalCurrentCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCurrentCharacterInputArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @lexicalCurrentCharacterInputArgumentAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalCurrentCharacterInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Attributes
  public : GALGAS_location mAttribute_mLocation ;

//--- Constructor
  public : cPtr_lexicalCurrentCharacterInputArgumentAST (const GALGAS_location & in_mLocation
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
//                                          @lexicalDropInstructionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalDropInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalDropInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalDropInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalDropInstructionAST * ptr (void) const { return (const cPtr_lexicalDropInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalDropInstructionAST (const cPtr_lexicalDropInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalDropInstructionAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalDropInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalDropInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTerminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalDropInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @lexicalDropInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalDropInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTerminalName ;

//--- Constructor
  public : cPtr_lexicalDropInstructionAST (const GALGAS_lstring & in_mTerminalName
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTerminalName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalSendDefaultActionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSendDefaultActionAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_lexicalSendDefaultActionAST (void) ;

//---
  public : inline const class cPtr_lexicalSendDefaultActionAST * ptr (void) const { return (const cPtr_lexicalSendDefaultActionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalSendDefaultActionAST (const cPtr_lexicalSendDefaultActionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSendDefaultActionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalSendDefaultActionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSendDefaultActionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @lexicalSendDefaultActionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalSendDefaultActionAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_lexicalSendDefaultActionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalErrorByDefaultAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalErrorByDefaultAST : public GALGAS_lexicalSendDefaultActionAST {
//--- Constructor
  public : GALGAS_lexicalErrorByDefaultAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalErrorByDefaultAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalErrorByDefaultAST * ptr (void) const { return (const cPtr_lexicalErrorByDefaultAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalErrorByDefaultAST (const cPtr_lexicalErrorByDefaultAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalErrorByDefaultAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalErrorByDefaultAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalErrorByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mDefaultErrorMessageName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalErrorByDefaultAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @lexicalErrorByDefaultAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalErrorByDefaultAST : public cPtr_lexicalSendDefaultActionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mDefaultErrorMessageName ;

//--- Constructor
  public : cPtr_lexicalErrorByDefaultAST (const GALGAS_lstring & in_mDefaultErrorMessageName
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mDefaultErrorMessageName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalErrorInstructionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalErrorInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalErrorInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalErrorInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalErrorInstructionAST * ptr (void) const { return (const cPtr_lexicalErrorInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalErrorInstructionAST (const cPtr_lexicalErrorInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalErrorInstructionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalErrorInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalErrorInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mErrorMessageName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalErrorInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @lexicalErrorInstructionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalErrorInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mErrorMessageName ;

//--- Constructor
  public : cPtr_lexicalErrorInstructionAST (const GALGAS_lstring & in_mErrorMessageName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mErrorMessageName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalExplicitRuleAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExplicitRuleAST : public GALGAS_abstractLexicalRuleAST {
//--- Constructor
  public : GALGAS_lexicalExplicitRuleAST (void) ;

//---
  public : inline const class cPtr_lexicalExplicitRuleAST * ptr (void) const { return (const cPtr_lexicalExplicitRuleAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalExplicitRuleAST (const cPtr_lexicalExplicitRuleAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExplicitRuleAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalExplicitRuleAST constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                 const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalExplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST reader_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExpressionAST reader_mLexicalRuleExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExplicitRuleAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @lexicalExplicitRuleAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalExplicitRuleAST : public cPtr_abstractLexicalRuleAST {
//--- Attributes
  public : GALGAS_lexicalExpressionAST mAttribute_mLexicalRuleExpression ;
  public : GALGAS_lexicalInstructionListAST mAttribute_mInstructionList ;

//--- Constructor
  public : cPtr_lexicalExplicitRuleAST (const GALGAS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                        const GALGAS_lexicalInstructionListAST & in_mInstructionList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalExpressionAST reader_mLexicalRuleExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalInstructionListAST reader_mInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @lexicalFormalInputArgumentAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFormalInputArgumentAST : public GALGAS_abstractLexicalRoutineActualArgumentAST {
//--- Constructor
  public : GALGAS_lexicalFormalInputArgumentAST (void) ;

//---
  public : inline const class cPtr_lexicalFormalInputArgumentAST * ptr (void) const { return (const cPtr_lexicalFormalInputArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalFormalInputArgumentAST (const cPtr_lexicalFormalInputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFormalInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalFormalInputArgumentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalFormalInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST reader_mRoutineOrFunctionFormalInputArgument (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFormalInputArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @lexicalFormalInputArgumentAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalFormalInputArgumentAST : public cPtr_abstractLexicalRoutineActualArgumentAST {
//--- Attributes
  public : GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST mAttribute_mRoutineOrFunctionFormalInputArgument ;

//--- Constructor
  public : cPtr_lexicalFormalInputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                               const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST reader_mRoutineOrFunctionFormalInputArgument (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalFunctionInputArgumentAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFunctionInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Constructor
  public : GALGAS_lexicalFunctionInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalFunctionInputArgumentAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalFunctionInputArgumentAST * ptr (void) const { return (const cPtr_lexicalFunctionInputArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalFunctionInputArgumentAST (const cPtr_lexicalFunctionInputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFunctionInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalFunctionInputArgumentAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lexicalFunctionCallActualArgumentListAST & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalFunctionInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionCallActualArgumentListAST reader_mFunctionActualArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFunctionName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionInputArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @lexicalFunctionInputArgumentAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalFunctionInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFunctionName ;
  public : GALGAS_lexicalFunctionCallActualArgumentListAST mAttribute_mFunctionActualArgumentList ;

//--- Constructor
  public : cPtr_lexicalFunctionInputArgumentAST (const GALGAS_lstring & in_mFunctionName,
                                                 const GALGAS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalFunctionCallActualArgumentListAST reader_mFunctionActualArgumentList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalImplicitRuleAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalImplicitRuleAST : public GALGAS_abstractLexicalRuleAST {
//--- Constructor
  public : GALGAS_lexicalImplicitRuleAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalImplicitRuleAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalImplicitRuleAST * ptr (void) const { return (const cPtr_lexicalImplicitRuleAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalImplicitRuleAST (const cPtr_lexicalImplicitRuleAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalImplicitRuleAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalImplicitRuleAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalImplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mListName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalImplicitRuleAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @lexicalImplicitRuleAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalImplicitRuleAST : public cPtr_abstractLexicalRuleAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mListName ;

//--- Constructor
  public : cPtr_lexicalImplicitRuleAST (const GALGAS_lstring & in_mListName
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mListName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalLogInstructionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalLogInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalLogInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalLogInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalLogInstructionAST * ptr (void) const { return (const cPtr_lexicalLogInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalLogInstructionAST (const cPtr_lexicalLogInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalLogInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalLogInstructionAST constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalLogInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalLogInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @lexicalLogInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalLogInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes

//--- Constructor
  public : cPtr_lexicalLogInstructionAST (LOCATION_ARGS) ;

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
//                                            @lexicalOrExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalOrExpressionAST : public GALGAS_lexicalExpressionAST {
//--- Constructor
  public : GALGAS_lexicalOrExpressionAST (void) ;

//---
  public : inline const class cPtr_lexicalOrExpressionAST * ptr (void) const { return (const cPtr_lexicalOrExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalOrExpressionAST (const cPtr_lexicalOrExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalOrExpressionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalOrExpressionAST constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                 const class GALGAS_lexicalExpressionAST & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalOrExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExpressionAST reader_mLeftOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExpressionAST reader_mRightOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalOrExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @lexicalOrExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalOrExpressionAST : public cPtr_lexicalExpressionAST {
//--- Attributes
  public : GALGAS_lexicalExpressionAST mAttribute_mLeftOperand ;
  public : GALGAS_lexicalExpressionAST mAttribute_mRightOperand ;

//--- Constructor
  public : cPtr_lexicalOrExpressionAST (const GALGAS_lexicalExpressionAST & in_mLeftOperand,
                                        const GALGAS_lexicalExpressionAST & in_mRightOperand
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalExpressionAST reader_mLeftOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalExpressionAST reader_mRightOperand (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalRepeatInstructionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRepeatInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalRepeatInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalRepeatInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalRepeatInstructionAST * ptr (void) const { return (const cPtr_lexicalRepeatInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalRepeatInstructionAST (const cPtr_lexicalRepeatInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRepeatInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalRepeatInstructionAST constructor_new (const class GALGAS_lexicalInstructionListAST & inOperand0,
                                                                      const class GALGAS_lexicalWhileBranchListAST & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalRepeatInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalWhileBranchListAST reader_mLexicalWhileBranchList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST reader_mRepeatedInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRepeatInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @lexicalRepeatInstructionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalRepeatInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lexicalInstructionListAST mAttribute_mRepeatedInstructionList ;
  public : GALGAS_lexicalWhileBranchListAST mAttribute_mLexicalWhileBranchList ;

//--- Constructor
  public : cPtr_lexicalRepeatInstructionAST (const GALGAS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                             const GALGAS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalInstructionListAST reader_mRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalWhileBranchListAST reader_mLexicalWhileBranchList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalRewindInstructionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRewindInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalRewindInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalRewindInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalRewindInstructionAST * ptr (void) const { return (const cPtr_lexicalRewindInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalRewindInstructionAST (const cPtr_lexicalRewindInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRewindInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalRewindInstructionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalRewindInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLexicalTagName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTerminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRewindInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @lexicalRewindInstructionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalRewindInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLexicalTagName ;
  public : GALGAS_lstring mAttribute_mTerminalName ;

//--- Constructor
  public : cPtr_lexicalRewindInstructionAST (const GALGAS_lstring & in_mLexicalTagName,
                                             const GALGAS_lstring & in_mTerminalName
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLexicalTagName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTerminalName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalRoutineInstructionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalRoutineInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalRoutineInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalRoutineInstructionAST * ptr (void) const { return (const cPtr_lexicalRoutineInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalRoutineInstructionAST (const cPtr_lexicalRoutineInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineInstructionAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalRoutineInstructionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lexicalRoutineCallActualArgumentListAST & inOperand1,
                                                                       const class GALGAS_lstringlist & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalRoutineInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineCallActualArgumentListAST reader_mActualArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mErrorMessageList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @lexicalRoutineInstructionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalRoutineInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mRoutineName ;
  public : GALGAS_lexicalRoutineCallActualArgumentListAST mAttribute_mActualArgumentList ;
  public : GALGAS_lstringlist mAttribute_mErrorMessageList ;

//--- Constructor
  public : cPtr_lexicalRoutineInstructionAST (const GALGAS_lstring & in_mRoutineName,
                                              const GALGAS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                              const GALGAS_lstringlist & in_mErrorMessageList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalRoutineCallActualArgumentListAST reader_mActualArgumentList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mErrorMessageList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalSelectInstructionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSelectInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalSelectInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalSelectInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalSelectInstructionAST * ptr (void) const { return (const cPtr_lexicalSelectInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalSelectInstructionAST (const cPtr_lexicalSelectInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSelectInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalSelectInstructionAST constructor_new (const class GALGAS_lexicalSelectBranchListAST & inOperand0,
                                                                      const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalSelectInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST reader_mDefaultInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSelectBranchListAST reader_mLexicalSelectBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSelectInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @lexicalSelectInstructionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalSelectInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lexicalSelectBranchListAST mAttribute_mLexicalSelectBranchList ;
  public : GALGAS_lexicalInstructionListAST mAttribute_mDefaultInstructionList ;

//--- Constructor
  public : cPtr_lexicalSelectInstructionAST (const GALGAS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                             const GALGAS_lexicalInstructionListAST & in_mDefaultInstructionList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSelectBranchListAST reader_mLexicalSelectBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalInstructionListAST reader_mDefaultInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalSendTerminalByDefaultAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSendTerminalByDefaultAST : public GALGAS_lexicalSendDefaultActionAST {
//--- Constructor
  public : GALGAS_lexicalSendTerminalByDefaultAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalSendTerminalByDefaultAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalSendTerminalByDefaultAST * ptr (void) const { return (const cPtr_lexicalSendTerminalByDefaultAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalSendTerminalByDefaultAST (const cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSendTerminalByDefaultAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalSendTerminalByDefaultAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalSendTerminalByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mDefaultSentTerminal (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSendTerminalByDefaultAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @lexicalSendTerminalByDefaultAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalSendTerminalByDefaultAST : public cPtr_lexicalSendDefaultActionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mDefaultSentTerminal ;

//--- Constructor
  public : cPtr_lexicalSendTerminalByDefaultAST (const GALGAS_lstring & in_mDefaultSentTerminal
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mDefaultSentTerminal (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalSimpleSendInstructionAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSimpleSendInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalSimpleSendInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalSimpleSendInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalSimpleSendInstructionAST * ptr (void) const { return (const cPtr_lexicalSimpleSendInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalSimpleSendInstructionAST (const cPtr_lexicalSimpleSendInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSimpleSendInstructionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalSimpleSendInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalSimpleSendInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSentTerminal (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSimpleSendInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @lexicalSimpleSendInstructionAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalSimpleSendInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mSentTerminal ;

//--- Constructor
  public : cPtr_lexicalSimpleSendInstructionAST (const GALGAS_lstring & in_mSentTerminal
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mSentTerminal (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalStringMatchAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalStringMatchAST : public GALGAS_lexicalExpressionAST {
//--- Constructor
  public : GALGAS_lexicalStringMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalStringMatchAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalStringMatchAST * ptr (void) const { return (const cPtr_lexicalStringMatchAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalStringMatchAST (const cPtr_lexicalStringMatchAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalStringMatchAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalStringMatchAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalStringMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStringMatchAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @lexicalStringMatchAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalStringMatchAST : public cPtr_lexicalExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mString ;

//--- Constructor
  public : cPtr_lexicalStringMatchAST (const GALGAS_lstring & in_mString
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mString (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalStringNotMatchAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalStringNotMatchAST : public GALGAS_lexicalExpressionAST {
//--- Constructor
  public : GALGAS_lexicalStringNotMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalStringNotMatchAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalStringNotMatchAST * ptr (void) const { return (const cPtr_lexicalStringNotMatchAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalStringNotMatchAST (const cPtr_lexicalStringNotMatchAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalStringNotMatchAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalStringNotMatchAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalStringNotMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mErrorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStringNotMatchAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @lexicalStringNotMatchAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalStringNotMatchAST : public cPtr_lexicalExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mString ;
  public : GALGAS_lstring mAttribute_mErrorMessage ;

//--- Constructor
  public : cPtr_lexicalStringNotMatchAST (const GALGAS_lstring & in_mString,
                                          const GALGAS_lstring & in_mErrorMessage
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mString (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mErrorMessage (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @lexicalStructuredSendInstructionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalStructuredSendInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalStructuredSendInstructionAST (void) ;

//---
  public : inline const class cPtr_lexicalStructuredSendInstructionAST * ptr (void) const { return (const cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalStructuredSendInstructionAST (const cPtr_lexicalStructuredSendInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalStructuredSendInstructionAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalStructuredSendInstructionAST constructor_new (const class GALGAS_lexicalSendSearchListAST & inOperand0,
                                                                              const class GALGAS_lexicalSendDefaultActionAST & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalStructuredSendInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSendDefaultActionAST reader_mLexicalSendDefaultAction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSendSearchListAST reader_mLexicalSendSearchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStructuredSendInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @lexicalStructuredSendInstructionAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalStructuredSendInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lexicalSendSearchListAST mAttribute_mLexicalSendSearchList ;
  public : GALGAS_lexicalSendDefaultActionAST mAttribute_mLexicalSendDefaultAction ;

//--- Constructor
  public : cPtr_lexicalStructuredSendInstructionAST (const GALGAS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                     const GALGAS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSendSearchListAST reader_mLexicalSendSearchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalSendDefaultActionAST reader_mLexicalSendDefaultAction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalTagInstructionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTagInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalTagInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalTagInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalTagInstructionAST * ptr (void) const { return (const cPtr_lexicalTagInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalTagInstructionAST (const cPtr_lexicalTagInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalTagInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalTagInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalTagInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLexicalTagName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalTagInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @lexicalTagInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalTagInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLexicalTagName ;

//--- Constructor
  public : cPtr_lexicalTagInstructionAST (const GALGAS_lstring & in_mLexicalTagName
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLexicalTagName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalUnsignedInputArgumentAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalUnsignedInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Constructor
  public : GALGAS_lexicalUnsignedInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalUnsignedInputArgumentAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalUnsignedInputArgumentAST * ptr (void) const { return (const cPtr_lexicalUnsignedInputArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalUnsignedInputArgumentAST (const cPtr_lexicalUnsignedInputArgumentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalUnsignedInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalUnsignedInputArgumentAST constructor_new (const class GALGAS_luint & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalUnsignedInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mUnsigned (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalUnsignedInputArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @lexicalUnsignedInputArgumentAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalUnsignedInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Attributes
  public : GALGAS_luint mAttribute_mUnsigned ;

//--- Constructor
  public : cPtr_lexicalUnsignedInputArgumentAST (const GALGAS_luint & in_mUnsigned
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mUnsigned (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalWarningInstructionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalWarningInstructionAST : public GALGAS_lexicalInstructionAST {
//--- Constructor
  public : GALGAS_lexicalWarningInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalWarningInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalWarningInstructionAST * ptr (void) const { return (const cPtr_lexicalWarningInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalWarningInstructionAST (const cPtr_lexicalWarningInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalWarningInstructionAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalWarningInstructionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalWarningInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mWarningMessageName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalWarningInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @lexicalWarningInstructionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalWarningInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mWarningMessageName ;

//--- Constructor
  public : cPtr_lexicalWarningInstructionAST (const GALGAS_lstring & in_mWarningMessageName
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mWarningMessageName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @lexicalTypeList list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTypeList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalTypeList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalTypeList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lexicalTypeEnum & in_mLexicalType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalTypeList extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalTypeList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_lexicalTypeList constructor_listWithValue (const class GALGAS_lexicalTypeEnum & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_lexicalTypeList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalTypeEnum & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalTypeList operator_concat (const GALGAS_lexicalTypeList & inOperand
                                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalTypeList add_operation (const GALGAS_lexicalTypeList & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lexicalTypeEnum constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lexicalTypeEnum & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lexicalTypeEnum & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lexicalTypeEnum & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalTypeEnum & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalTypeEnum & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum reader_mLexicalTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalTypeList ;
 
} ; // End of GALGAS_lexicalTypeList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalTypeList : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalTypeList (const GALGAS_lexicalTypeList & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalTypeList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalTypeList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTypeList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalTypeList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalTypeList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalTypeList_2D_element (const GALGAS_lexicalTypeEnum & in_mLexicalType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalTypeList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalTypeList_2D_element constructor_new (const class GALGAS_lexicalTypeEnum & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalTypeList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum reader_mLexicalType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalTypeList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @terminalList list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_terminalList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_terminalList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mTerminalName,
                                                  const class GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                                  const class GALGAS_string & in_mSyntaxErrorMessage,
                                                  const class GALGAS_bool & in_mIsEndOfTemplateMark,
                                                  const class GALGAS_bool & in_mAtomicSelection,
                                                  const class GALGAS_uint & in_mStyleIndex
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_terminalList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_terminalList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_lexicalSentValueList & inOperand1,
                                                                 const class GALGAS_string & inOperand2,
                                                                 const class GALGAS_bool & inOperand3,
                                                                 const class GALGAS_bool & inOperand4,
                                                                 const class GALGAS_uint & inOperand5
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_terminalList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalSentValueList & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      const class GALGAS_uint & inOperand5
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_terminalList operator_concat (const GALGAS_terminalList & inOperand
                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_terminalList add_operation (const GALGAS_terminalList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lexicalSentValueList constinArgument1,
                                                         class GALGAS_string constinArgument2,
                                                         class GALGAS_bool constinArgument3,
                                                         class GALGAS_bool constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         class GALGAS_uint constinArgument6,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lexicalSentValueList & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    class GALGAS_bool & outArgument3,
                                                    class GALGAS_bool & outArgument4,
                                                    class GALGAS_uint & outArgument5,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lexicalSentValueList & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   class GALGAS_uint & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lexicalSentValueList & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_bool & outArgument3,
                                                         class GALGAS_bool & outArgument4,
                                                         class GALGAS_uint & outArgument5,
                                                         class GALGAS_uint constinArgument6,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lexicalSentValueList & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               class GALGAS_bool & outArgument4,
                                               class GALGAS_uint & outArgument5,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lexicalSentValueList & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              class GALGAS_uint & outArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mAtomicSelectionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsEndOfTemplateMarkAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList reader_mSentAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mStyleIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSyntaxErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTerminalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_terminalList ;
 
} ; // End of GALGAS_terminalList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_terminalList : public cGenericAbstractEnumerator {
  public : cEnumerator_terminalList (const GALGAS_terminalList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mTerminalName (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalSentValueList current_mSentAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsEndOfTemplateMark (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mAtomicSelection (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mStyleIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_terminalList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @terminalList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mTerminalName ;
  public : GALGAS_lexicalSentValueList mAttribute_mSentAttributeList ;
  public : GALGAS_string mAttribute_mSyntaxErrorMessage ;
  public : GALGAS_bool mAttribute_mIsEndOfTemplateMark ;
  public : GALGAS_bool mAttribute_mAtomicSelection ;
  public : GALGAS_uint mAttribute_mStyleIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_terminalList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_terminalList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_terminalList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_terminalList_2D_element (const GALGAS_lstring & in_mTerminalName,
                                           const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                           const GALGAS_string & in_mSyntaxErrorMessage,
                                           const GALGAS_bool & in_mIsEndOfTemplateMark,
                                           const GALGAS_bool & in_mAtomicSelection,
                                           const GALGAS_uint & in_mStyleIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_terminalList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lexicalSentValueList & inOperand1,
                                                                  const class GALGAS_string & inOperand2,
                                                                  const class GALGAS_bool & inOperand3,
                                                                  const class GALGAS_bool & inOperand4,
                                                                  const class GALGAS_uint & inOperand5
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mAtomicSelection (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsEndOfTemplateMark (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList reader_mSentAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mStyleIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSyntaxErrorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTerminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalExplicitTokenListMap map                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalExplicitTokenListMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalExplicitTokenListMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExplicitTokenListMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalExplicitTokenListMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inSource) ;
  public : GALGAS_lexicalExplicitTokenListMap & operator = (const GALGAS_lexicalExplicitTokenListMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExplicitTokenListMap extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalExplicitTokenListMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_lexicalExplicitTokenListMap constructor_mapWithMapToOverride (const class GALGAS_lexicalExplicitTokenListMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_lstring constinArgument1,
                                                     class GALGAS_lstringlist constinArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMFeatureListForKey (class GALGAS_lstringlist constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMTerminalForKey (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_lstringlist & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mFeatureListForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTerminalForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalExplicitTokenListMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalExplicitTokenListMap ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalExplicitTokenListMap : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mTerminal (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mFeatureList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalExplicitTokenListMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@lexicalExplicitTokenListMap' map                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalExplicitTokenListMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mTerminal ;
  public : GALGAS_lstringlist mAttribute_mFeatureList ;

//--- Constructor
  public : cMapElement_lexicalExplicitTokenListMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_lstring & in_mTerminal,
                                                    const GALGAS_lstringlist & in_mFeatureList
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
//                                   @lexicalExplicitTokenListMap_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExplicitTokenListMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstring mAttribute_mTerminal ;
  public : GALGAS_lstringlist mAttribute_mFeatureList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalExplicitTokenListMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalExplicitTokenListMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalExplicitTokenListMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalExplicitTokenListMap_2D_element (const GALGAS_lstring & in_lkey,
                                                          const GALGAS_lstring & in_mTerminal,
                                                          const GALGAS_lstringlist & in_mFeatureList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExplicitTokenListMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalExplicitTokenListMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstringlist & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalExplicitTokenListMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mFeatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTerminal (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @tokenSortedlist sorted list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_tokenSortedlist : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_tokenSortedlist (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tokenSortedlist extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_tokenSortedlist constructor_emptySortedList (LOCATION_ARGS) ;

  public : static GALGAS_tokenSortedlist constructor_sortedListWithValue (const class GALGAS_uint & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_string & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_tokenSortedlist inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_tokenSortedlist operator_concat (const GALGAS_tokenSortedlist & inOperand
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_popGreatest (class GALGAS_uint & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popSmallest (class GALGAS_uint & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_uint & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_uint & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_tokenSortedlist ;
 
} ; // End of GALGAS_tokenSortedlist class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_tokenSortedlist : public cGenericAbstractEnumerator {
  public : cEnumerator_tokenSortedlist (const GALGAS_tokenSortedlist & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_uint current_mLength (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTerminalName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_tokenSortedlist_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tokenSortedlist ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @tokenSortedlist_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_tokenSortedlist_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mLength ;
  public : GALGAS_string mAttribute_mName ;
  public : GALGAS_string mAttribute_mTerminalName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_tokenSortedlist_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_tokenSortedlist_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_tokenSortedlist_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_tokenSortedlist_2D_element (const GALGAS_uint & in_mLength,
                                              const GALGAS_string & in_mName,
                                              const GALGAS_string & in_mTerminalName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tokenSortedlist_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_tokenSortedlist_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                     const class GALGAS_string & inOperand1,
                                                                     const class GALGAS_string & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tokenSortedlist_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mLength (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTerminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tokenSortedlist_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tokenSortedlist_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalExplicitTokenListMapMap map                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalExplicitTokenListMapMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalExplicitTokenListMapMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExplicitTokenListMapMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalExplicitTokenListMapMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inSource) ;
  public : GALGAS_lexicalExplicitTokenListMapMap & operator = (const GALGAS_lexicalExplicitTokenListMapMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExplicitTokenListMapMap extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalExplicitTokenListMapMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_lexicalExplicitTokenListMapMap constructor_mapWithMapToOverride (const class GALGAS_lexicalExplicitTokenListMapMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalExplicitTokenListMap & inOperand1,
                                                      const class GALGAS_tokenSortedlist & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_lexicalExplicitTokenListMap constinArgument1,
                                                     class GALGAS_tokenSortedlist constinArgument2,
                                                     class GALGAS_bool constinArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMExplicitTokenListMapForKey (class GALGAS_lexicalExplicitTokenListMap constinArgument0,
                                                                          class GALGAS_string constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMShouldBeGeneratedForKey (class GALGAS_bool constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMTokenSortedListForKey (class GALGAS_tokenSortedlist constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalExplicitTokenListMap & outArgument1,
                                                   class GALGAS_tokenSortedlist & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMap reader_mExplicitTokenListMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mShouldBeGeneratedForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tokenSortedlist reader_mTokenSortedListForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMapMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalExplicitTokenListMapMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalExplicitTokenListMapMap ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMapMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalExplicitTokenListMapMap : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalExplicitTokenListMap current_mExplicitTokenListMap (LOCATION_ARGS) const ;
  public : class GALGAS_tokenSortedlist current_mTokenSortedList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mShouldBeGenerated (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalExplicitTokenListMapMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@lexicalExplicitTokenListMapMap' map                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalExplicitTokenListMapMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalExplicitTokenListMap mAttribute_mExplicitTokenListMap ;
  public : GALGAS_tokenSortedlist mAttribute_mTokenSortedList ;
  public : GALGAS_bool mAttribute_mShouldBeGenerated ;

//--- Constructor
  public : cMapElement_lexicalExplicitTokenListMapMap (const GALGAS_lstring & inKey,
                                                       const GALGAS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                       const GALGAS_tokenSortedlist & in_mTokenSortedList,
                                                       const GALGAS_bool & in_mShouldBeGenerated
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
//                                  @lexicalExplicitTokenListMapMap_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalExplicitTokenListMapMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lexicalExplicitTokenListMap mAttribute_mExplicitTokenListMap ;
  public : GALGAS_tokenSortedlist mAttribute_mTokenSortedList ;
  public : GALGAS_bool mAttribute_mShouldBeGenerated ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalExplicitTokenListMapMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalExplicitTokenListMapMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalExplicitTokenListMapMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalExplicitTokenListMapMap_2D_element (const GALGAS_lstring & in_lkey,
                                                             const GALGAS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                             const GALGAS_tokenSortedlist & in_mTokenSortedList,
                                                             const GALGAS_bool & in_mShouldBeGenerated) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalExplicitTokenListMapMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalExplicitTokenListMapMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lexicalExplicitTokenListMap & inOperand1,
                                                                                    const class GALGAS_tokenSortedlist & inOperand2,
                                                                                    const class GALGAS_bool & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalExplicitTokenListMapMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMap reader_mExplicitTokenListMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mShouldBeGenerated (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tokenSortedlist reader_mTokenSortedList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMapMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @lexicalMessageMap map                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalMessageMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalMessageMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalMessageMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalMessageMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalMessageMap (const GALGAS_lexicalMessageMap & inSource) ;
  public : GALGAS_lexicalMessageMap & operator = (const GALGAS_lexicalMessageMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalMessageMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalMessageMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_lexicalMessageMap constructor_mapWithMapToOverride (const class GALGAS_lexicalMessageMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_lstring constinArgument1,
                                                     class GALGAS_bool constinArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMLexicalMessageForKey (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMMessageIsUsedForKey (class GALGAS_bool constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLexicalMessageForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mMessageIsUsedForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalMessageMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalMessageMap ;
 
} ; // End of GALGAS_lexicalMessageMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalMessageMap : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalMessageMap (const GALGAS_lexicalMessageMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mLexicalMessage (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mMessageIsUsed (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalMessageMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@lexicalMessageMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalMessageMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mLexicalMessage ;
  public : GALGAS_bool mAttribute_mMessageIsUsed ;

//--- Constructor
  public : cMapElement_lexicalMessageMap (const GALGAS_lstring & inKey,
                                          const GALGAS_lstring & in_mLexicalMessage,
                                          const GALGAS_bool & in_mMessageIsUsed
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
//                                        @lexicalMessageMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalMessageMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstring mAttribute_mLexicalMessage ;
  public : GALGAS_bool mAttribute_mMessageIsUsed ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalMessageMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalMessageMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalMessageMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalMessageMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_lstring & in_mLexicalMessage,
                                                const GALGAS_bool & in_mMessageIsUsed) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalMessageMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalMessageMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_bool & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalMessageMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLexicalMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mMessageIsUsed (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalMessageMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalRoutineFormalArgumentList list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineFormalArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalRoutineFormalArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalRoutineFormalArgumentList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                  const class GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                  const class GALGAS_string & in_mArgumentNameForComment
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineFormalArgumentList extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalRoutineFormalArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_lexicalRoutineFormalArgumentList constructor_listWithValue (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                     const class GALGAS_lexicalTypeEnum & inOperand1,
                                                                                     const class GALGAS_string & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_lexicalRoutineFormalArgumentList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                      const class GALGAS_lexicalTypeEnum & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalRoutineFormalArgumentList operator_concat (const GALGAS_lexicalRoutineFormalArgumentList & inOperand
                                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalRoutineFormalArgumentList add_operation (const GALGAS_lexicalRoutineFormalArgumentList & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lexicalArgumentModeAST constinArgument0,
                                                         class GALGAS_lexicalTypeEnum constinArgument1,
                                                         class GALGAS_string constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                    class GALGAS_lexicalTypeEnum & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                   class GALGAS_lexicalTypeEnum & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                         class GALGAS_lexicalTypeEnum & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                               class GALGAS_lexicalTypeEnum & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                              class GALGAS_lexicalTypeEnum & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mArgumentNameForCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalArgumentModeAST reader_mLexicalFormalArgumentModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum reader_mLexicalFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalRoutineFormalArgumentList ;
 
} ; // End of GALGAS_lexicalRoutineFormalArgumentList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalRoutineFormalArgumentList : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lexicalArgumentModeAST current_mLexicalFormalArgumentMode (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mLexicalFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalRoutineFormalArgumentList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @lexicalRoutineFormalArgumentList_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineFormalArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalArgumentModeAST mAttribute_mLexicalFormalArgumentMode ;
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalFormalArgumentType ;
  public : GALGAS_string mAttribute_mArgumentNameForComment ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalRoutineFormalArgumentList_2D_element (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                               const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                               const GALGAS_string & in_mArgumentNameForComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineFormalArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalRoutineFormalArgumentList_2D_element constructor_new (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                      const class GALGAS_lexicalTypeEnum & inOperand1,
                                                                                      const class GALGAS_string & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalRoutineFormalArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mArgumentNameForComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalArgumentModeAST reader_mLexicalFormalArgumentMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum reader_mLexicalFormalArgumentType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineFormalArgumentList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @lexicalRoutineMap map                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalRoutineMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalRoutineMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalRoutineMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inSource) ;
  public : GALGAS_lexicalRoutineMap & operator = (const GALGAS_lexicalRoutineMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_lexicalRoutineMap constructor_mapWithMapToOverride (const class GALGAS_lexicalRoutineMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalRoutineFormalArgumentList & inOperand1,
                                                      const class GALGAS_stringlist & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_lexicalRoutineFormalArgumentList constinArgument1,
                                                     class GALGAS_stringlist constinArgument2,
                                                     class GALGAS_bool constinArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMErrorMessageListForKey (class GALGAS_stringlist constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIsExternForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMLexicalRoutineFormalArgumentListForKey (class GALGAS_lexicalRoutineFormalArgumentList constinArgument0,
                                                                                      class GALGAS_string constinArgument1,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalRoutineFormalArgumentList & outArgument1,
                                                   class GALGAS_stringlist & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mErrorMessageListForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsExternForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList reader_mLexicalRoutineFormalArgumentListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalRoutineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalRoutineMap ;
 
} ; // End of GALGAS_lexicalRoutineMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalRoutineMap : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalRoutineFormalArgumentList current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mErrorMessageList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsExtern (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalRoutineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@lexicalRoutineMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalRoutineMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalRoutineFormalArgumentList mAttribute_mLexicalRoutineFormalArgumentList ;
  public : GALGAS_stringlist mAttribute_mErrorMessageList ;
  public : GALGAS_bool mAttribute_mIsExtern ;

//--- Constructor
  public : cMapElement_lexicalRoutineMap (const GALGAS_lstring & inKey,
                                          const GALGAS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                          const GALGAS_stringlist & in_mErrorMessageList,
                                          const GALGAS_bool & in_mIsExtern
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
//                                        @lexicalRoutineMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lexicalRoutineFormalArgumentList mAttribute_mLexicalRoutineFormalArgumentList ;
  public : GALGAS_stringlist mAttribute_mErrorMessageList ;
  public : GALGAS_bool mAttribute_mIsExtern ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalRoutineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalRoutineMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalRoutineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalRoutineMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                                const GALGAS_stringlist & in_mErrorMessageList,
                                                const GALGAS_bool & in_mIsExtern) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lexicalRoutineFormalArgumentList & inOperand1,
                                                                       const class GALGAS_stringlist & inOperand2,
                                                                       const class GALGAS_bool & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalRoutineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist reader_mErrorMessageList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsExtern (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList reader_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalFunctionFormalArgumentList list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFunctionFormalArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexicalFunctionFormalArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexicalFunctionFormalArgumentList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                  const class GALGAS_string & in_mArgumentNameForComment
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFunctionFormalArgumentList extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalFunctionFormalArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_lexicalFunctionFormalArgumentList constructor_listWithValue (const class GALGAS_lexicalTypeEnum & inOperand0,
                                                                                      const class GALGAS_string & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_lexicalFunctionFormalArgumentList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalTypeEnum & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalFunctionFormalArgumentList operator_concat (const GALGAS_lexicalFunctionFormalArgumentList & inOperand
                                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalFunctionFormalArgumentList add_operation (const GALGAS_lexicalFunctionFormalArgumentList & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lexicalTypeEnum constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lexicalTypeEnum & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lexicalTypeEnum & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lexicalTypeEnum & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalTypeEnum & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalTypeEnum & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mArgumentNameForCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum reader_mLexicalTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalFunctionFormalArgumentList ;
 
} ; // End of GALGAS_lexicalFunctionFormalArgumentList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalFunctionFormalArgumentList : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalFunctionFormalArgumentList (const GALGAS_lexicalFunctionFormalArgumentList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalFunctionFormalArgumentList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @lexicalFunctionFormalArgumentList_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFunctionFormalArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalTypeEnum mAttribute_mLexicalType ;
  public : GALGAS_string mAttribute_mArgumentNameForComment ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalFunctionFormalArgumentList_2D_element (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                const GALGAS_string & in_mArgumentNameForComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFunctionFormalArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalFunctionFormalArgumentList_2D_element constructor_new (const class GALGAS_lexicalTypeEnum & inOperand0,
                                                                                       const class GALGAS_string & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalFunctionFormalArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mArgumentNameForComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum reader_mLexicalType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionFormalArgumentList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @lexicalFunctionMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalFunctionMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalFunctionMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFunctionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalFunctionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inSource) ;
  public : GALGAS_lexicalFunctionMap & operator = (const GALGAS_lexicalFunctionMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFunctionMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalFunctionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_lexicalFunctionMap constructor_mapWithMapToOverride (const class GALGAS_lexicalFunctionMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lexicalFunctionFormalArgumentList & inOperand1,
                                                      const class GALGAS_lexicalTypeEnum & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_lexicalFunctionFormalArgumentList constinArgument1,
                                                     class GALGAS_lexicalTypeEnum constinArgument2,
                                                     class GALGAS_string constinArgument3,
                                                     class GALGAS_bool constinArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIsExternForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMLexicalTypeListForKey (class GALGAS_lexicalFunctionFormalArgumentList constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMReplacementFunctionNameForKey (class GALGAS_string constinArgument0,
                                                                             class GALGAS_string constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMReturnedLexicalTypeForKey (class GALGAS_lexicalTypeEnum constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lexicalFunctionFormalArgumentList & outArgument1,
                                                   class GALGAS_lexicalTypeEnum & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsExternForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList reader_mLexicalTypeListForKey (const class GALGAS_string & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mReplacementFunctionNameForKey (const class GALGAS_string & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum reader_mReturnedLexicalTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalFunctionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalFunctionMap ;
 
} ; // End of GALGAS_lexicalFunctionMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalFunctionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalFunctionFormalArgumentList current_mLexicalTypeList (LOCATION_ARGS) const ;
  public : class GALGAS_lexicalTypeEnum current_mReturnedLexicalType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mReplacementFunctionName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsExtern (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalFunctionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@lexicalFunctionMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalFunctionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lexicalFunctionFormalArgumentList mAttribute_mLexicalTypeList ;
  public : GALGAS_lexicalTypeEnum mAttribute_mReturnedLexicalType ;
  public : GALGAS_string mAttribute_mReplacementFunctionName ;
  public : GALGAS_bool mAttribute_mIsExtern ;

//--- Constructor
  public : cMapElement_lexicalFunctionMap (const GALGAS_lstring & inKey,
                                           const GALGAS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                           const GALGAS_lexicalTypeEnum & in_mReturnedLexicalType,
                                           const GALGAS_string & in_mReplacementFunctionName,
                                           const GALGAS_bool & in_mIsExtern
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
//                                        @lexicalFunctionMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalFunctionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lexicalFunctionFormalArgumentList mAttribute_mLexicalTypeList ;
  public : GALGAS_lexicalTypeEnum mAttribute_mReturnedLexicalType ;
  public : GALGAS_string mAttribute_mReplacementFunctionName ;
  public : GALGAS_bool mAttribute_mIsExtern ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalFunctionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalFunctionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalFunctionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                                 const GALGAS_lexicalTypeEnum & in_mReturnedLexicalType,
                                                 const GALGAS_string & in_mReplacementFunctionName,
                                                 const GALGAS_bool & in_mIsExtern) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalFunctionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalFunctionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lexicalFunctionFormalArgumentList & inOperand1,
                                                                        const class GALGAS_lexicalTypeEnum & inOperand2,
                                                                        const class GALGAS_string & inOperand3,
                                                                        const class GALGAS_bool & inOperand4
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalFunctionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsExtern (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList reader_mLexicalTypeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mReplacementFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum reader_mReturnedLexicalType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @templateDelimitorList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateDelimitorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_templateDelimitorList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_templateDelimitorList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mStartString,
                                                  const class GALGAS_lstring & in_mEndString,
                                                  const class GALGAS_bool & in_mPreservesStartDelimiter
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateDelimitorList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateDelimitorList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_templateDelimitorList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_bool & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_templateDelimitorList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_bool & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_templateDelimitorList operator_concat (const GALGAS_templateDelimitorList & inOperand
                                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_templateDelimitorList add_operation (const GALGAS_templateDelimitorList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_bool constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_bool & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_bool & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mEndStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mPreservesStartDelimiterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mStartStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_templateDelimitorList ;
 
} ; // End of GALGAS_templateDelimitorList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_templateDelimitorList : public cGenericAbstractEnumerator {
  public : cEnumerator_templateDelimitorList (const GALGAS_templateDelimitorList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mStartString (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mEndString (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mPreservesStartDelimiter (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_templateDelimitorList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateDelimitorList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateDelimitorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mStartString ;
  public : GALGAS_lstring mAttribute_mEndString ;
  public : GALGAS_bool mAttribute_mPreservesStartDelimiter ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateDelimitorList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_templateDelimitorList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_templateDelimitorList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_templateDelimitorList_2D_element (const GALGAS_lstring & in_mStartString,
                                                    const GALGAS_lstring & in_mEndString,
                                                    const GALGAS_bool & in_mPreservesStartDelimiter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateDelimitorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateDelimitorList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_bool & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateDelimitorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mEndString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mPreservesStartDelimiter (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mStartString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateDelimitorList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @styleMap map                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_styleMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_styleMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_styleMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_styleMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_styleMap (const GALGAS_styleMap & inSource) ;
  public : GALGAS_styleMap & operator = (const GALGAS_styleMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_styleMap extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_styleMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_styleMap constructor_mapWithMapToOverride (const class GALGAS_styleMap & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_lstring constinArgument1,
                                                     class GALGAS_uint constinArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMCommentForKey (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMStyleIndexForKey (class GALGAS_uint constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mCommentForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mStyleIndexForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_styleMap reader_overriddenMap (C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_styleMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                      const GALGAS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_styleMap ;
 
} ; // End of GALGAS_styleMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_styleMap : public cGenericAbstractEnumerator {
  public : cEnumerator_styleMap (const GALGAS_styleMap & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mComment (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mStyleIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_styleMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_styleMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@styleMap' map                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_styleMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mComment ;
  public : GALGAS_uint mAttribute_mStyleIndex ;

//--- Constructor
  public : cMapElement_styleMap (const GALGAS_lstring & inKey,
                                 const GALGAS_lstring & in_mComment,
                                 const GALGAS_uint & in_mStyleIndex
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
//                                             @styleMap_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_styleMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstring mAttribute_mComment ;
  public : GALGAS_uint mAttribute_mStyleIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_styleMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_styleMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_styleMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_styleMap_2D_element (const GALGAS_lstring & in_lkey,
                                       const GALGAS_lstring & in_mComment,
                                       const GALGAS_uint & in_mStyleIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_styleMap_2D_element extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_styleMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_lstring & inOperand1,
                                                              const class GALGAS_uint & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_styleMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mStyleIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_styleMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_styleMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @lexicalTagMap map                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalTagMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_lexicalTagMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTagMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_lexicalTagMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_lexicalTagMap (const GALGAS_lexicalTagMap & inSource) ;
  public : GALGAS_lexicalTagMap & operator = (const GALGAS_lexicalTagMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalTagMap extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalTagMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_lexicalTagMap constructor_mapWithMapToOverride (const class GALGAS_lexicalTagMap & inOperand0
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
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalTagMap reader_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_lexicalTagMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalTagMap ;
 
} ; // End of GALGAS_lexicalTagMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexicalTagMap : public cGenericAbstractEnumerator {
  public : cEnumerator_lexicalTagMap (const GALGAS_lexicalTagMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexicalTagMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@lexicalTagMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_lexicalTagMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_lexicalTagMap (const GALGAS_lstring & inKey
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
//                                          @lexicalTagMap_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalTagMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalTagMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalTagMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalTagMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalTagMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalTagMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalTagMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalTagMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalTagMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @lexiqueComponentGenerationList list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexiqueComponentGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_lexiqueComponentGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_lexiqueComponentGenerationList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mLexiqueComponentName,
                                                  const class GALGAS_string & in_mCppHeaderContents,
                                                  const class GALGAS_string & in_mCppContents,
                                                  const class GALGAS_string & in_mCocoaHeaderContents,
                                                  const class GALGAS_string & in_mCocoaContents
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueComponentGenerationList extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexiqueComponentGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_lexiqueComponentGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_string & inOperand2,
                                                                                   const class GALGAS_string & inOperand3,
                                                                                   const class GALGAS_string & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_lexiqueComponentGenerationList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_string & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexiqueComponentGenerationList operator_concat (const GALGAS_lexiqueComponentGenerationList & inOperand
                                                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_lexiqueComponentGenerationList add_operation (const GALGAS_lexiqueComponentGenerationList & inOperand,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_string constinArgument2,
                                                         class GALGAS_string constinArgument3,
                                                         class GALGAS_string constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_string & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    class GALGAS_string & outArgument3,
                                                    class GALGAS_string & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_string & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   class GALGAS_string & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_string & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_string & outArgument3,
                                                         class GALGAS_string & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               class GALGAS_string & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_string & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCocoaContentsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCocoaHeaderContentsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppContentsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppHeaderContentsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLexiqueComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexiqueComponentGenerationList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexiqueComponentGenerationList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexiqueComponentGenerationList ;
 
} ; // End of GALGAS_lexiqueComponentGenerationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_lexiqueComponentGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_lexiqueComponentGenerationList (const GALGAS_lexiqueComponentGenerationList & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mLexiqueComponentName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mCppHeaderContents (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mCppContents (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mCocoaHeaderContents (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mCocoaContents (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_lexiqueComponentGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentGenerationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @lexiqueComponentGenerationList_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexiqueComponentGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mLexiqueComponentName ;
  public : GALGAS_string mAttribute_mCppHeaderContents ;
  public : GALGAS_string mAttribute_mCppContents ;
  public : GALGAS_string mAttribute_mCocoaHeaderContents ;
  public : GALGAS_string mAttribute_mCocoaContents ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexiqueComponentGenerationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_lexiqueComponentGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexiqueComponentGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexiqueComponentGenerationList_2D_element (const GALGAS_string & in_mLexiqueComponentName,
                                                             const GALGAS_string & in_mCppHeaderContents,
                                                             const GALGAS_string & in_mCppContents,
                                                             const GALGAS_string & in_mCocoaHeaderContents,
                                                             const GALGAS_string & in_mCocoaContents) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueComponentGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexiqueComponentGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    const class GALGAS_string & inOperand2,
                                                                                    const class GALGAS_string & inOperand3,
                                                                                    const class GALGAS_string & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexiqueComponentGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCocoaContents (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCocoaHeaderContents (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppContents (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppHeaderContents (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLexiqueComponentName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueComponentGenerationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentGenerationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @optionDefaultValueEnumAST enum                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionDefaultValueEnumAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_optionDefaultValueEnumAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noDefaultValue,
    kEnum_unsignedDefaultValue,
    kEnum_stringDefaultValue
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
  public : static GALGAS_optionDefaultValueEnumAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionDefaultValueEnumAST constructor_noDefaultValue (LOCATION_ARGS) ;

  public : static GALGAS_optionDefaultValueEnumAST constructor_stringDefaultValue (LOCATION_ARGS) ;

  public : static GALGAS_optionDefaultValueEnumAST constructor_unsignedDefaultValue (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionDefaultValueEnumAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isNoDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isStringDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isUnsignedDefaultValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionDefaultValueEnumAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @commandLineOptionListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_commandLineOptionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_commandLineOptionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_commandLineOptionListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mOptionTypeName,
                                                  const class GALGAS_lstring & in_mOptionInternalName,
                                                  const class GALGAS_lchar & in_mOptionInvocationLetter,
                                                  const class GALGAS_lstring & in_mOptionInvocationString,
                                                  const class GALGAS_lstring & in_mOptionComment,
                                                  const class GALGAS_lstring & in_mOptionDefaultValue,
                                                  const class GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_commandLineOptionListAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_commandLineOptionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_commandLineOptionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lchar & inOperand2,
                                                                             const class GALGAS_lstring & inOperand3,
                                                                             const class GALGAS_lstring & inOperand4,
                                                                             const class GALGAS_lstring & inOperand5,
                                                                             const class GALGAS_optionDefaultValueEnumAST & inOperand6
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_commandLineOptionListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lchar & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_lstring & inOperand4,
                                                      const class GALGAS_lstring & inOperand5,
                                                      const class GALGAS_optionDefaultValueEnumAST & inOperand6
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionListAST operator_concat (const GALGAS_commandLineOptionListAST & inOperand
                                                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionListAST add_operation (const GALGAS_commandLineOptionListAST & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_lchar constinArgument2,
                                                         class GALGAS_lstring constinArgument3,
                                                         class GALGAS_lstring constinArgument4,
                                                         class GALGAS_lstring constinArgument5,
                                                         class GALGAS_optionDefaultValueEnumAST constinArgument6,
                                                         class GALGAS_uint constinArgument7,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_lchar & outArgument2,
                                                    class GALGAS_lstring & outArgument3,
                                                    class GALGAS_lstring & outArgument4,
                                                    class GALGAS_lstring & outArgument5,
                                                    class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_lchar & outArgument2,
                                                   class GALGAS_lstring & outArgument3,
                                                   class GALGAS_lstring & outArgument4,
                                                   class GALGAS_lstring & outArgument5,
                                                   class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_lchar & outArgument2,
                                                         class GALGAS_lstring & outArgument3,
                                                         class GALGAS_lstring & outArgument4,
                                                         class GALGAS_lstring & outArgument5,
                                                         class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                                         class GALGAS_uint constinArgument7,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lchar & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               class GALGAS_lstring & outArgument4,
                                               class GALGAS_lstring & outArgument5,
                                               class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lchar & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_lstring & outArgument4,
                                              class GALGAS_lstring & outArgument5,
                                              class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionDefaultValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_optionDefaultValueEnumAST reader_mOptionDefaultValueKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionInternalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lchar reader_mOptionInvocationLetterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionInvocationStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_commandLineOptionListAST ;
 
} ; // End of GALGAS_commandLineOptionListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_commandLineOptionListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_commandLineOptionListAST (const GALGAS_commandLineOptionListAST & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mOptionTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOptionInternalName (LOCATION_ARGS) const ;
  public : class GALGAS_lchar current_mOptionInvocationLetter (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOptionInvocationString (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOptionComment (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mOptionDefaultValue (LOCATION_ARGS) const ;
  public : class GALGAS_optionDefaultValueEnumAST current_mOptionDefaultValueKind (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_commandLineOptionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @commandLineOptionListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_commandLineOptionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mOptionTypeName ;
  public : GALGAS_lstring mAttribute_mOptionInternalName ;
  public : GALGAS_lchar mAttribute_mOptionInvocationLetter ;
  public : GALGAS_lstring mAttribute_mOptionInvocationString ;
  public : GALGAS_lstring mAttribute_mOptionComment ;
  public : GALGAS_lstring mAttribute_mOptionDefaultValue ;
  public : GALGAS_optionDefaultValueEnumAST mAttribute_mOptionDefaultValueKind ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_commandLineOptionListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_commandLineOptionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_commandLineOptionListAST_2D_element (const GALGAS_lstring & in_mOptionTypeName,
                                                       const GALGAS_lstring & in_mOptionInternalName,
                                                       const GALGAS_lchar & in_mOptionInvocationLetter,
                                                       const GALGAS_lstring & in_mOptionInvocationString,
                                                       const GALGAS_lstring & in_mOptionComment,
                                                       const GALGAS_lstring & in_mOptionDefaultValue,
                                                       const GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_commandLineOptionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_commandLineOptionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_lchar & inOperand2,
                                                                              const class GALGAS_lstring & inOperand3,
                                                                              const class GALGAS_lstring & inOperand4,
                                                                              const class GALGAS_lstring & inOperand5,
                                                                              const class GALGAS_optionDefaultValueEnumAST & inOperand6
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_commandLineOptionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_optionDefaultValueEnumAST reader_mOptionDefaultValueKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionInternalName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lchar reader_mOptionInvocationLetter (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionInvocationString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_commandLineOptionListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Parser class 'optionSyntax' declaration                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_optionSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_optionSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_option_ (class GALGAS_commandLineOptionListAST & ioArgument0,
                                       class C_String & ioSyntaxDirectedTranslationResult,
                                       class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_option_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                            class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_option_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_option_5F_component_5F_start_5F_symbol_ (class GALGAS_optionComponentAST & outArgument0,
                                                                       class C_String & ioSyntaxDirectedTranslationResult,
                                                                       class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_option_5F_component_5F_start_5F_symbol_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                            class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;

  protected : virtual void nt_option_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgas_32_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_optionSyntax_option_5F_component_5F_start_5F_symbol_i0_ (GALGAS_optionComponentAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_optionSyntax_option_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_optionSyntax_option_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_optionSyntax_option_i1_ (GALGAS_commandLineOptionListAST & ioArgument0,
                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                 C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_optionSyntax_option_i1_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                      C_Lexique_galgas_32_Scanner * inLexique) ;

  protected : void rule_optionSyntax_option_i1_indexing (C_Lexique_galgas_32_Scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_optionSyntax_0 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_optionSyntax_1 (C_Lexique_galgas_32_Scanner *) = 0 ;

  protected : virtual int32_t select_optionSyntax_2 (C_Lexique_galgas_32_Scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @optionComponentAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionComponentAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_optionComponentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionComponentAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_optionComponentAST * ptr (void) const { return (const cPtr_optionComponentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_optionComponentAST (const cPtr_optionComponentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionComponentAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionComponentAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                             const class GALGAS_commandLineOptionListAST & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionListAST reader_mOptions (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionComponentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @optionComponentAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_optionComponentAST : public acPtr_class {
//--- Attributes
  public : GALGAS_lstring mAttribute_mOptionComponentName ;
  public : GALGAS_commandLineOptionListAST mAttribute_mOptions ;

//--- Constructor
  public : cPtr_optionComponentAST (const GALGAS_lstring & in_mOptionComponentName,
                                    const GALGAS_commandLineOptionListAST & in_mOptions
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionListAST reader_mOptions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @commandLineOptionMap map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_commandLineOptionMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_commandLineOptionMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_commandLineOptionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_commandLineOptionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_commandLineOptionMap (const GALGAS_commandLineOptionMap & inSource) ;
  public : GALGAS_commandLineOptionMap & operator = (const GALGAS_commandLineOptionMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_commandLineOptionMap extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_commandLineOptionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_commandLineOptionMap constructor_mapWithMapToOverride (const class GALGAS_commandLineOptionMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_char & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_string & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_char constinArgument1,
                                                     class GALGAS_string constinArgument2,
                                                     class GALGAS_string constinArgument3,
                                                     class GALGAS_string constinArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMCommentForKey (class GALGAS_string constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMDefaultValueForKey (class GALGAS_string constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMOptionCharForKey (class GALGAS_char constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMOptionStringForKey (class GALGAS_string constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_char & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   class GALGAS_string & outArgument3,
                                                   class GALGAS_string & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCommentForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mDefaultValueForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_char reader_mOptionCharForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOptionStringForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_commandLineOptionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_commandLineOptionMap ;
 
} ; // End of GALGAS_commandLineOptionMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_commandLineOptionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_commandLineOptionMap (const GALGAS_commandLineOptionMap & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_char current_mOptionChar (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mOptionString (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mComment (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mDefaultValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_commandLineOptionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@commandLineOptionMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_commandLineOptionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_char mAttribute_mOptionChar ;
  public : GALGAS_string mAttribute_mOptionString ;
  public : GALGAS_string mAttribute_mComment ;
  public : GALGAS_string mAttribute_mDefaultValue ;

//--- Constructor
  public : cMapElement_commandLineOptionMap (const GALGAS_lstring & inKey,
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
//                                       @commandLineOptionMap_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_commandLineOptionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_char mAttribute_mOptionChar ;
  public : GALGAS_string mAttribute_mOptionString ;
  public : GALGAS_string mAttribute_mComment ;
  public : GALGAS_string mAttribute_mDefaultValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_commandLineOptionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_commandLineOptionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_commandLineOptionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_commandLineOptionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                   const GALGAS_char & in_mOptionChar,
                                                   const GALGAS_string & in_mOptionString,
                                                   const GALGAS_string & in_mComment,
                                                   const GALGAS_string & in_mDefaultValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_commandLineOptionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_commandLineOptionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_char & inOperand1,
                                                                          const class GALGAS_string & inOperand2,
                                                                          const class GALGAS_string & inOperand3,
                                                                          const class GALGAS_string & inOperand4
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_commandLineOptionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mComment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_char reader_mOptionChar (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOptionString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_commandLineOptionMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @guiSimpleAttributeListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guiSimpleAttributeListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_guiSimpleAttributeListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_guiSimpleAttributeListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mKey,
                                                  const class GALGAS_lstring & in_mValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guiSimpleAttributeListAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_guiSimpleAttributeListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_guiSimpleAttributeListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_guiSimpleAttributeListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_guiSimpleAttributeListAST operator_concat (const GALGAS_guiSimpleAttributeListAST & inOperand
                                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_guiSimpleAttributeListAST add_operation (const GALGAS_guiSimpleAttributeListAST & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mKeyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_guiSimpleAttributeListAST ;
 
} ; // End of GALGAS_guiSimpleAttributeListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_guiSimpleAttributeListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_guiSimpleAttributeListAST (const GALGAS_guiSimpleAttributeListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mKey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_guiSimpleAttributeListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @guiSimpleAttributeListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guiSimpleAttributeListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mKey ;
  public : GALGAS_lstring mAttribute_mValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_guiSimpleAttributeListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_guiSimpleAttributeListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_guiSimpleAttributeListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_guiSimpleAttributeListAST_2D_element (const GALGAS_lstring & in_mKey,
                                                        const GALGAS_lstring & in_mValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guiSimpleAttributeListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_guiSimpleAttributeListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guiSimpleAttributeListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mKey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guiSimpleAttributeListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiSimpleAttributeListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @guiCompoundAttributeListAST list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guiCompoundAttributeListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_guiCompoundAttributeListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_guiCompoundAttributeListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mKey,
                                                  const class GALGAS_lstring & in_mAttributeName,
                                                  const class GALGAS_lstring & in_mValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guiCompoundAttributeListAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_guiCompoundAttributeListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_guiCompoundAttributeListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_guiCompoundAttributeListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_guiCompoundAttributeListAST operator_concat (const GALGAS_guiCompoundAttributeListAST & inOperand
                                                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_guiCompoundAttributeListAST add_operation (const GALGAS_guiCompoundAttributeListAST & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstring constinArgument1,
                                                         class GALGAS_lstring constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mKeyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiCompoundAttributeListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guiCompoundAttributeListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_guiCompoundAttributeListAST ;
 
} ; // End of GALGAS_guiCompoundAttributeListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_guiCompoundAttributeListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_guiCompoundAttributeListAST (const GALGAS_guiCompoundAttributeListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mKey (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_guiCompoundAttributeListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @guiCompoundAttributeListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guiCompoundAttributeListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mKey ;
  public : GALGAS_lstring mAttribute_mAttributeName ;
  public : GALGAS_lstring mAttribute_mValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_guiCompoundAttributeListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_guiCompoundAttributeListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_guiCompoundAttributeListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_guiCompoundAttributeListAST_2D_element (const GALGAS_lstring & in_mKey,
                                                          const GALGAS_lstring & in_mAttributeName,
                                                          const GALGAS_lstring & in_mValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guiCompoundAttributeListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_guiCompoundAttributeListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guiCompoundAttributeListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mKey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guiCompoundAttributeListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCompoundAttributeListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @terminalLabelListAST list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_terminalLabelListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_terminalLabelListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mTerminal,
                                                  const class GALGAS_uint & in_mDisplayFlags
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalLabelListAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_terminalLabelListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_terminalLabelListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_uint & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_terminalLabelListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_terminalLabelListAST operator_concat (const GALGAS_terminalLabelListAST & inOperand
                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_terminalLabelListAST add_operation (const GALGAS_terminalLabelListAST & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_uint & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_uint & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mDisplayFlagsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTerminalAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalLabelListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalLabelListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_terminalLabelListAST ;
 
} ; // End of GALGAS_terminalLabelListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_terminalLabelListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_terminalLabelListAST (const GALGAS_terminalLabelListAST & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mTerminal (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mDisplayFlags (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_terminalLabelListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalLabelListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @terminalLabelListAST_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalLabelListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mTerminal ;
  public : GALGAS_uint mAttribute_mDisplayFlags ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_terminalLabelListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_terminalLabelListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_terminalLabelListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_terminalLabelListAST_2D_element (const GALGAS_lstring & in_mTerminal,
                                                   const GALGAS_uint & in_mDisplayFlags) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalLabelListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_terminalLabelListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_uint & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalLabelListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mDisplayFlags (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTerminal (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalLabelListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalLabelListAST_2D_element ;

#endif
