//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     File 'class-trueExpressionForGeneration.h'                                      *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_trueExpressionForGeneration_DEFINED
#define class_2D_trueExpressionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-trueExpressionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @trueExpressionForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_trueExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes

//--- Constructor
  public : cPtr_trueExpressionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mType,
                                             const GALGAS_location & in_mLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

