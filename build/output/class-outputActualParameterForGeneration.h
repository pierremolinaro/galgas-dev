#ifndef class_2D_outputActualParameterForGeneration_DEFINED
#define class_2D_outputActualParameterForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-outputActualParameterForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @outputActualParameterForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_outputActualParameterForGeneration : public cPtr_actualParameterForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mOutputActualParameterExpression ;

//--- Constructor
  public : cPtr_outputActualParameterForGeneration (const GALGAS_unifiedTypeMapProxy & in_mFormalArgumentType,
                                                    const GALGAS_semanticExpressionForGeneration & in_mOutputActualParameterExpression
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mOutputActualParameterExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

