#ifndef class_2D_testDynamicClassInExpressionForGeneration_DEFINED
#define class_2D_testDynamicClassInExpressionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-testDynamicClassInExpressionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionForGeneration.h"
#include "enum-dynamicTypeComparisonKind.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @testDynamicClassInExpressionForGeneration class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_testDynamicClassInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mReceiverExpression ;
  public : GALGAS_dynamicTypeComparisonKind mAttribute_mTypeComparisonKind ;
  public : GALGAS_unifiedTypeMapProxy mAttribute_mCastType ;

//--- Constructor
  public : cPtr_testDynamicClassInExpressionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mType,
                                                           const GALGAS_location & in_mLocation,
                                                           const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                           const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                           const GALGAS_unifiedTypeMapProxy & in_mCastType
                                                           COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mReceiverExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_dynamicTypeComparisonKind reader_mTypeComparisonKind (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mCastType (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

