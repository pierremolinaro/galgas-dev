#ifndef class_2D_selfModifierCallInstructionForGeneration_DEFINED
#define class_2D_selfModifierCallInstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-selfModifierCallInstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-methodKind.h"
#include "list-actualParameterListForGeneration.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @selfModifierCallInstructionForGeneration class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfModifierCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mSelfCppName ;
  public : GALGAS_unifiedTypeMapProxy mAttribute_mReceiverType ;
  public : GALGAS_lstring mAttribute_mModifierName ;
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_actualParameterListForGeneration mAttribute_mActualParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;

//--- Constructor
  public : cPtr_selfModifierCallInstructionForGeneration (const GALGAS_string & in_mSelfCppName,
                                                          const GALGAS_unifiedTypeMapProxy & in_mReceiverType,
                                                          const GALGAS_lstring & in_mModifierName,
                                                          const GALGAS_methodKind & in_mKind,
                                                          const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                          const GALGAS_bool & in_mHasCompilerArgument
                                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mSelfCppName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mReceiverType (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mModifierName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_methodKind reader_mKind (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration reader_mActualParameterList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

