#ifndef class_2D_outputInputActualParameterForGeneration_DEFINED
#define class_2D_outputInputActualParameterForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-outputInputActualParameterForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-unifiedTypeMapProxyList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @outputInputActualParameterForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_outputInputActualParameterForGeneration : public cPtr_actualParameterForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mOutputInputVariableCppName ;
  public : GALGAS_lstringlist mAttribute_mStructAttributeList ;
  public : GALGAS_unifiedTypeMapProxyList mAttribute_mTypeList ;

//--- Constructor
  public : cPtr_outputInputActualParameterForGeneration (const GALGAS_unifiedTypeMapProxy & in_mFormalArgumentType,
                                                         const GALGAS_string & in_mOutputInputVariableCppName,
                                                         const GALGAS_lstringlist & in_mStructAttributeList,
                                                         const GALGAS_unifiedTypeMapProxyList & in_mTypeList
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mOutputInputVariableCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxyList reader_mTypeList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

