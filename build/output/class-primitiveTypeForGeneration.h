//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     File 'class-primitiveTypeForGeneration.h'                                       *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_primitiveTypeForGeneration_DEFINED
#define class_2D_primitiveTypeForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-primitiveTypeForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-predefinedTypeKindEnum.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @primitiveTypeForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_primitiveTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mPredefinedTypeName ;
  public : GALGAS_predefinedTypeKindEnum mAttribute_mKind ;

//--- Constructor
  public : cPtr_primitiveTypeForGeneration (const GALGAS_unifiedTypeMapProxy & in_mTypeProxy,
                                            const GALGAS_string & in_mPredefinedTypeName,
                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mPredefinedTypeName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_predefinedTypeKindEnum reader_mKind (UNUSED_LOCATION_ARGS) const ;
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

