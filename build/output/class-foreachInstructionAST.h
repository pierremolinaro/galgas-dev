#ifndef class_2D_foreachInstructionAST_DEFINED
#define class_2D_foreachInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-foreachInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionAST.h"
#include "list-foreachInstructionEnumeratedObjectListAST.h"
#include "list-semanticInstructionListAST.h"
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

#endif

