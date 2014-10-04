#ifndef class_2D_switchInstructionAST_DEFINED
#define class_2D_switchInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-switchInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionAST.h"
#include "list-switchBranchesAST.h"
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

#endif

