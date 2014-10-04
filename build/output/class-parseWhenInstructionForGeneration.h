#ifndef class_2D_parseWhenInstructionForGeneration_DEFINED
#define class_2D_parseWhenInstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-parseWhenInstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionForGeneration.h"
#include "list-semanticInstructionListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @parseWhenInstructionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_parseWhenInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mWhenExpression ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mInstructionList ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mElseInstructionList ;

//--- Constructor
  public : cPtr_parseWhenInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_semanticExpressionForGeneration & in_mWhenExpression,
                                                   const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                   const GALGAS_semanticInstructionListForGeneration & in_mElseInstructionList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mWhenExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mElseInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

