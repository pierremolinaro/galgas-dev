#ifndef class_2D_functionCallExpressionForGeneration_DEFINED
#define class_2D_functionCallExpressionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-functionCallExpressionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-semanticExpressionListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @functionCallExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionCallExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mFunctionName ;
  public : GALGAS_semanticExpressionListForGeneration mAttribute_mExpressions ;

//--- Constructor
  public : cPtr_functionCallExpressionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_string & in_mFunctionName,
                                                     const GALGAS_semanticExpressionListForGeneration & in_mExpressions
                                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFunctionName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration reader_mExpressions (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

