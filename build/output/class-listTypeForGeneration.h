//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        File 'class-listTypeForGeneration.h'                                         *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_listTypeForGeneration_DEFINED
#define class_2D_listTypeForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-listTypeForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-typedAttributeList.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @listTypeForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_listTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mListElementTypeIndex ;
  public : GALGAS_typedAttributeList mAttribute_mTypedAttributeList ;

//--- Constructor
  public : cPtr_listTypeForGeneration (const GALGAS_unifiedTypeMapProxy & in_mTypeProxy,
                                       const GALGAS_unifiedTypeMapProxy & in_mListElementTypeIndex,
                                       const GALGAS_typedAttributeList & in_mTypedAttributeList
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mListElementTypeIndex (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedAttributeList reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const ;
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

