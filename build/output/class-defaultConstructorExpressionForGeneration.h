#ifndef class_2D_defaultConstructorExpressionForGeneration_DEFINED
#define class_2D_defaultConstructorExpressionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-defaultConstructorExpressionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @defaultConstructorExpressionForGeneration class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_defaultConstructorExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes

//--- Constructor
  public : cPtr_defaultConstructorExpressionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mResultType,
                                                           const GALGAS_location & in_mLocation
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

