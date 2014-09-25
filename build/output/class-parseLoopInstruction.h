#ifndef class_2D_parseLoopInstruction_DEFINED
#define class_2D_parseLoopInstruction_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-parseLoopInstruction-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionAST.h"
#include "list-syntaxInstructionList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @parseLoopInstruction class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_parseLoopInstruction : public cPtr_syntaxInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mVariantExpression ;
  public : GALGAS_location mAttribute_mEndOfVariantExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mWhileExpression ;
  public : GALGAS_location mAttribute_mEndOfWhileExpression ;
  public : GALGAS_syntaxInstructionList mAttribute_mDoInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstructionList ;

//--- Constructor
  public : cPtr_parseLoopInstruction (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_semanticExpressionAST & in_mVariantExpression,
                                      const GALGAS_location & in_mEndOfVariantExpression,
                                      const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                      const GALGAS_location & in_mEndOfWhileExpression,
                                      const GALGAS_syntaxInstructionList & in_mDoInstructionList,
                                      const GALGAS_location & in_mEndOfInstructionList
                                      COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mVariantExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfVariantExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mWhileExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfWhileExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxInstructionList reader_mDoInstructionList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

