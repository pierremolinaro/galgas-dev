#ifndef class_2D_templateBlockInstructionAST_DEFINED
#define class_2D_templateBlockInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateBlockInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateExpressionAST.h"
#include "list-templateInstructionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @templateBlockInstructionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateBlockInstructionAST : public cPtr_templateInstructionAST {
//--- Attributes
  public : GALGAS_templateExpressionAST mAttribute_mExpression ;
  public : GALGAS_location mAttribute_mLocation ;
  public : GALGAS_templateInstructionListAST mAttribute_mBlockInstructionList ;

//--- Constructor
  public : cPtr_templateBlockInstructionAST (const GALGAS_templateExpressionAST & in_mExpression,
                                             const GALGAS_location & in_mLocation,
                                             const GALGAS_templateInstructionListAST & in_mBlockInstructionList
                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST reader_mExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mLocation (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListAST reader_mBlockInstructionList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

