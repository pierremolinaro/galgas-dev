#ifndef class_2D_andShortExpressionForGeneration_DEFINED
#define class_2D_andShortExpressionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-andShortExpressionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @andShortExpressionForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_andShortExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_andShortExpressionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mResultType,
                                                 const GALGAS_location & in_mLocation,
                                                 const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                 const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

