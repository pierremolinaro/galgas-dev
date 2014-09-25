#ifndef class_2D_foreachInstructionForGeneration_DEFINED
#define class_2D_foreachInstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-foreachInstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionForGeneration.h"
#include "list-foreachInstructionEnumeratedObjectListForGeneration.h"
#include "list-semanticInstructionListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @foreachInstructionForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_foreachInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;
  public : GALGAS_foreachInstructionEnumeratedObjectListForGeneration mAttribute_mEnumeratedObjectList ;
  public : GALGAS_string mAttribute_mIndexVariableCppName ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mWhileExpression ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mBeforeInstructionList ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mBetweenInstructionList ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mDoInstructionList ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mAfterInstructionList ;

//--- Constructor
  public : cPtr_foreachInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_foreachInstructionEnumeratedObjectListForGeneration & in_mEnumeratedObjectList,
                                                 const GALGAS_string & in_mIndexVariableCppName,
                                                 const GALGAS_semanticExpressionForGeneration & in_mWhileExpression,
                                                 const GALGAS_semanticInstructionListForGeneration & in_mBeforeInstructionList,
                                                 const GALGAS_semanticInstructionListForGeneration & in_mBetweenInstructionList,
                                                 const GALGAS_semanticInstructionListForGeneration & in_mDoInstructionList,
                                                 const GALGAS_semanticInstructionListForGeneration & in_mAfterInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_foreachInstructionEnumeratedObjectListForGeneration reader_mEnumeratedObjectList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mIndexVariableCppName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mWhileExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mDoInstructionList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mAfterInstructionList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

