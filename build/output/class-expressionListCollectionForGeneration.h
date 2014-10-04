#ifndef class_2D_expressionListCollectionForGeneration_DEFINED
#define class_2D_expressionListCollectionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-expressionListCollectionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-semanticExpressionListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @expressionListCollectionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expressionListCollectionForGeneration : public cPtr_abstractCollectionValueElementForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionListForGeneration mAttribute_mExpressionList ;

//--- Constructor
  public : cPtr_expressionListCollectionForGeneration (const GALGAS_location & in_mExpressionLocation,
                                                       const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration reader_mExpressionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

