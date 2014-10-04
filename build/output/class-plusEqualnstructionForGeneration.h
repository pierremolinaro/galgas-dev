#ifndef class_2D_plusEqualnstructionForGeneration_DEFINED
#define class_2D_plusEqualnstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-plusEqualnstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-semanticExpressionListForGeneration.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @plusEqualnstructionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_plusEqualnstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mReceiverCppName ;
  public : GALGAS_unifiedTypeMapProxy mAttribute_mTargetType ;
  public : GALGAS_string mAttribute_mNameForCheckingFormalParameterUsing ;
  public : GALGAS_location mAttribute_mInstructionLocation ;
  public : GALGAS_lstringlist mAttribute_mStructAttributeList ;
  public : GALGAS_semanticExpressionListForGeneration mAttribute_mExpressionList ;

//--- Constructor
  public : cPtr_plusEqualnstructionForGeneration (const GALGAS_string & in_mReceiverCppName,
                                                  const GALGAS_unifiedTypeMapProxy & in_mTargetType,
                                                  const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                  const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstringlist & in_mStructAttributeList,
                                                  const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mReceiverCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration reader_mExpressionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

