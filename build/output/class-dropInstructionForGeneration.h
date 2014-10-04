#ifndef class_2D_dropInstructionForGeneration_DEFINED
#define class_2D_dropInstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-dropInstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-unifiedTypeMapProxyList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @dropInstructionForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_dropInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_stringlist mAttribute_mDropList ;
  public : GALGAS_string mAttribute_mComment ;
  public : GALGAS_unifiedTypeMapProxyList mAttribute_mDropTypeList ;

//--- Constructor
  public : cPtr_dropInstructionForGeneration (const GALGAS_stringlist & in_mDropList,
                                              const GALGAS_string & in_mComment,
                                              const GALGAS_unifiedTypeMapProxyList & in_mDropTypeList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist reader_mDropList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mComment (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxyList reader_mDropTypeList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

