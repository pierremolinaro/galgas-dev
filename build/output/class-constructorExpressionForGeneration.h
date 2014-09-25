#ifndef class_2D_constructorExpressionForGeneration_DEFINED
#define class_2D_constructorExpressionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-constructorExpressionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-semanticExpressionListForGeneration.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @constructorExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_constructorExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mConstructorType ;
  public : GALGAS_string mAttribute_mConstructorName ;
  public : GALGAS_semanticExpressionListForGeneration mAttribute_mEffectiveParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;

//--- Constructor
  public : cPtr_constructorExpressionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_unifiedTypeMapProxy & in_mConstructorType,
                                                    const GALGAS_string & in_mConstructorName,
                                                    const GALGAS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                    const GALGAS_bool & in_mHasCompilerArgument
                                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mConstructorType (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mConstructorName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration reader_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

