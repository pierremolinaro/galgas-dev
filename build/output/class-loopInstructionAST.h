#ifndef class_2D_loopInstructionAST_DEFINED
#define class_2D_loopInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-loopInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionAST.h"
#include "list-semanticInstructionListAST.h"
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

#endif

