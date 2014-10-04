#ifndef class_2D_literalSInt_36__34_ExpressionForGeneration_DEFINED
#define class_2D_literalSInt_36__34_ExpressionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-literalSInt64ExpressionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @literalSInt64ExpressionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalSInt_36__34_ExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_sint_36__34_ mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalSInt_36__34_ExpressionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mResultType,
                                                            const GALGAS_location & in_mLocation,
                                                            const GALGAS_sint_36__34_ & in_mValue
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_sint_36__34_ reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

