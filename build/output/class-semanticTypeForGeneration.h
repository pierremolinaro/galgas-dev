#ifndef class_2D_semanticTypeForGeneration_DEFINED
#define class_2D_semanticTypeForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticTypeForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @semanticTypeForGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_semanticTypeForGeneration : public cPtr_semanticDeclarationForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mTypeProxy ;

//--- Constructor
  public : cPtr_semanticTypeForGeneration (const GALGAS_unifiedTypeMapProxy & in_mTypeProxy
                                           COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mTypeProxy (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

