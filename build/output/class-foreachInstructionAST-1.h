#ifndef class_2D_foreachInstructionAST_1_DEFINED
#define class_2D_foreachInstructionAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticInstructionAST.h"
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

#endif

