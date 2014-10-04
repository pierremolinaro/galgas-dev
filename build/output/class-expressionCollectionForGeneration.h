#ifndef class_2D_expressionCollectionForGeneration_DEFINED
#define class_2D_expressionCollectionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-expressionCollectionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-collectionValueElementListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @expressionCollectionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expressionCollectionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_collectionValueElementListForGeneration mAttribute_mElementList ;

//--- Constructor
  public : cPtr_expressionCollectionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_collectionValueElementListForGeneration & in_mElementList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_collectionValueElementListForGeneration reader_mElementList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

