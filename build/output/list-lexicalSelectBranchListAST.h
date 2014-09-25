#ifndef list_2D_lexicalSelectBranchListAST_1_DEFINED
#define list_2D_lexicalSelectBranchListAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

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

#endif

