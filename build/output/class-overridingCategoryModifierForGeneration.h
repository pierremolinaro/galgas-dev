#ifndef class_2D_overridingCategoryModifierForGeneration_DEFINED
#define class_2D_overridingCategoryModifierForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-overridingCategoryModifierForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalParameterListForGeneration.h"
#include "list-semanticInstructionListForGeneration.h"
#include "list-typedAttributeList.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @overridingCategoryModifierForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overridingCategoryModifierForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mReceiverType ;
  public : GALGAS_string mAttribute_mBaseTypeName ;
  public : GALGAS_string mAttribute_mCategoryModifierName ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mCategoryModifierFormalParameterList ;
  public : GALGAS_typedAttributeList mAttribute_mTypedAttributeList ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_overridingCategoryModifierForGeneration (const GALGAS_bool & in_mHasHeader,
                                                         const GALGAS_string & in_mImplementationCppFileName,
                                                         const GALGAS_unifiedTypeMapProxy & in_mReceiverType,
                                                         const GALGAS_string & in_mBaseTypeName,
                                                         const GALGAS_string & in_mCategoryModifierName,
                                                         const GALGAS_formalParameterListForGeneration & in_mCategoryModifierFormalParameterList,
                                                         const GALGAS_typedAttributeList & in_mTypedAttributeList,
                                                         const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mBaseTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCategoryModifierName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration reader_mCategoryModifierFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedAttributeList reader_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

