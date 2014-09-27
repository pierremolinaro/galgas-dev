#ifndef class_2D_literalUIntExpressionForGeneration_DEFINED
#define class_2D_literalUIntExpressionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-literalUIntExpressionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @literalUIntExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalUIntExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_uint mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalUIntExpressionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_uint & in_mValue
                                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mValue (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

