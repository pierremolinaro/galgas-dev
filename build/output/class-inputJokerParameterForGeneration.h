#ifndef class_2D_inputJokerParameterForGeneration_DEFINED
#define class_2D_inputJokerParameterForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-inputJokerParameterForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @inputJokerParameterForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inputJokerParameterForGeneration : public cPtr_actualParameterForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mInputActualCppName ;

//--- Constructor
  public : cPtr_inputJokerParameterForGeneration (const GALGAS_unifiedTypeMapProxy & in_mFormalArgumentType,
                                                  const GALGAS_string & in_mInputActualCppName
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mInputActualCppName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

