#ifndef class_2D_modifierCallInstructionForGeneration_DEFINED
#define class_2D_modifierCallInstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-modifierCallInstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-methodKind.h"
#include "list-actualParameterListForGeneration.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @modifierCallInstructionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_modifierCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mReceiverCppName ;
  public : GALGAS_string mAttribute_mReceiverBaseName ;
  public : GALGAS_lstringlist mAttribute_mReceiverStructAttributes ;
  public : GALGAS_unifiedTypeMapProxy mAttribute_mReceiverType ;
  public : GALGAS_lstring mAttribute_mModifierName ;
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_actualParameterListForGeneration mAttribute_mActualParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMapProxy mAttribute_mMethodBaseType ;

//--- Constructor
  public : cPtr_modifierCallInstructionForGeneration (const GALGAS_string & in_mReceiverCppName,
                                                      const GALGAS_string & in_mReceiverBaseName,
                                                      const GALGAS_lstringlist & in_mReceiverStructAttributes,
                                                      const GALGAS_unifiedTypeMapProxy & in_mReceiverType,
                                                      const GALGAS_lstring & in_mModifierName,
                                                      const GALGAS_methodKind & in_mKind,
                                                      const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                      const GALGAS_bool & in_mHasCompilerArgument,
                                                      const GALGAS_unifiedTypeMapProxy & in_mMethodBaseType
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mReceiverCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mReceiverBaseName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mReceiverStructAttributes (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mModifierName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_methodKind reader_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration reader_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasCompilerArgument (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mMethodBaseType (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

