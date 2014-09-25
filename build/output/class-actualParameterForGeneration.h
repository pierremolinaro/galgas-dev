#ifndef class_2D_actualParameterForGeneration_DEFINED
#define class_2D_actualParameterForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-actualParameterForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @actualParameterForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_actualParameterForGeneration : public acPtr_class {
//--- Attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mFormalArgumentType ;

//--- Constructor
  public : cPtr_actualParameterForGeneration (const GALGAS_unifiedTypeMapProxy & in_mFormalArgumentType
                                              COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mFormalArgumentType (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

