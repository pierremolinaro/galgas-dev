#ifndef class_2D_structuredCastInstructionAST_DEFINED
#define class_2D_structuredCastInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-structuredCastInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionAST.h"
#include "list-castInstructionBranchListAST.h"
#include "list-semanticInstructionListAST.h"
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

#endif

