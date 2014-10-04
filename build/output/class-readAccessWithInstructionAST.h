#ifndef class_2D_readAccessWithInstructionAST_DEFINED
#define class_2D_readAccessWithInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-readAccessWithInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionAST.h"
#include "list-semanticInstructionListAST.h"
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

#endif

