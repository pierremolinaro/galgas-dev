#ifndef class_2D_expressionListCollectionValue_DEFINED
#define class_2D_expressionListCollectionValue_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-expressionListCollectionValue-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-actualOutputExpressionList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @expressionListCollectionValue class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expressionListCollectionValue : public cPtr_abstractCollectionValueElement {
//--- Attributes
  public : GALGAS_actualOutputExpressionList mAttribute_mExpressionList ;
  public : GALGAS_location mAttribute_mEndOfExpressionLocation ;

//--- Constructor
  public : cPtr_expressionListCollectionValue (const GALGAS_actualOutputExpressionList & in_mExpressionList,
                                               const GALGAS_location & in_mEndOfExpressionLocation
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList reader_mExpressionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfExpressionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

