#ifndef class_2D_enumTypeForGeneration_DEFINED
#define class_2D_enumTypeForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-enumTypeForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-enumConstantList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @enumTypeForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_enumConstantList mAttribute_mConstantList ;

//--- Constructor
  public : cPtr_enumTypeForGeneration (const GALGAS_unifiedTypeMapProxy & in_mTypeProxy,
                                       const GALGAS_enumConstantList & in_mConstantList
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_enumConstantList reader_mConstantList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

