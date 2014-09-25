#ifndef list_2D_foreachInstructionEnumeratedObjectListAST_1_DEFINED
#define list_2D_foreachInstructionEnumeratedObjectListAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @foreachInstructionEnumeratedObjectListAST list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_foreachInstructionEnumeratedObjectListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_foreachInstructionEnumeratedObjectListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_foreachInstructionEnumeratedObjectListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mEnumerationOrder,
                                                  const class GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                  const class GALGAS_location & in_mEndOfEnumerationExpression,
                                                  const class GALGAS_foreachInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                  const class GALGAS_location & in_mEndOfElementList,
                                                  const class GALGAS_bool & in_mEndsWithEllipsis,
                                                  const class GALGAS_lstring & in_mPrefix
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_foreachInstructionEnumeratedObjectListAST extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_foreachInstructionEnumeratedObjectListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_foreachInstructionEnumeratedObjectListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                              const class GALGAS_location & inOperand2,
                                                                                              const class GALGAS_foreachInstructionEnumeratedObjectElementListAST & inOperand3,
                                                                                              const class GALGAS_location & inOperand4,
                                                                                              const class GALGAS_bool & inOperand5,
                                                                                              const class GALGAS_lstring & inOperand6
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_foreachInstructionEnumeratedObjectListAST inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                      const class GALGAS_location & inOperand2,
                                                      const class GALGAS_foreachInstructionEnumeratedObjectElementListAST & inOperand3,
                                                      const class GALGAS_location & inOperand4,
                                                      const class GALGAS_bool & inOperand5,
                                                      const class GALGAS_lstring & inOperand6
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_foreachInstructionEnumeratedObjectListAST operator_concat (const GALGAS_foreachInstructionEnumeratedObjectListAST & inOperand
                                                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_foreachInstructionEnumeratedObjectListAST add_operation (const GALGAS_foreachInstructionEnumeratedObjectListAST & inOperand,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_semanticExpressionAST constinArgument1,
                                                         class GALGAS_location constinArgument2,
                                                         class GALGAS_foreachInstructionEnumeratedObjectElementListAST constinArgument3,
                                                         class GALGAS_location constinArgument4,
                                                         class GALGAS_bool constinArgument5,
                                                         class GALGAS_lstring constinArgument6,
                                                         class GALGAS_uint constinArgument7,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_semanticExpressionAST & outArgument1,
                                                    class GALGAS_location & outArgument2,
                                                    class GALGAS_foreachInstructionEnumeratedObjectElementListAST & outArgument3,
                                                    class GALGAS_location & outArgument4,
                                                    class GALGAS_bool & outArgument5,
                                                    class GALGAS_lstring & outArgument6,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_semanticExpressionAST & outArgument1,
                                                   class GALGAS_location & outArgument2,
                                                   class GALGAS_foreachInstructionEnumeratedObjectElementListAST & outArgument3,
                                                   class GALGAS_location & outArgument4,
                                                   class GALGAS_bool & outArgument5,
                                                   class GALGAS_lstring & outArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_semanticExpressionAST & outArgument1,
                                                         class GALGAS_location & outArgument2,
                                                         class GALGAS_foreachInstructionEnumeratedObjectElementListAST & outArgument3,
                                                         class GALGAS_location & outArgument4,
                                                         class GALGAS_bool & outArgument5,
                                                         class GALGAS_lstring & outArgument6,
                                                         class GALGAS_uint constinArgument7,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_semanticExpressionAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               class GALGAS_foreachInstructionEnumeratedObjectElementListAST & outArgument3,
                                               class GALGAS_location & outArgument4,
                                               class GALGAS_bool & outArgument5,
                                               class GALGAS_lstring & outArgument6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_semanticExpressionAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              class GALGAS_foreachInstructionEnumeratedObjectElementListAST & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              class GALGAS_bool & outArgument5,
                                              class GALGAS_lstring & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_foreachInstructionEnumeratedObjectListAST reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_foreachInstructionEnumeratedObjectListAST reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_foreachInstructionEnumeratedObjectListAST ;
 
} ; // End of GALGAS_foreachInstructionEnumeratedObjectListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_foreachInstructionEnumeratedObjectListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_foreachInstructionEnumeratedObjectListAST (const GALGAS_foreachInstructionEnumeratedObjectListAST & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mEnumerationOrder (LOCATION_ARGS) const ;
  public : class GALGAS_semanticExpressionAST current_mEnumeratedExpression (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfEnumerationExpression (LOCATION_ARGS) const ;
  public : class GALGAS_foreachInstructionEnumeratedObjectElementListAST current_mElementList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfElementList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mEndsWithEllipsis (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mPrefix (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_foreachInstructionEnumeratedObjectListAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

