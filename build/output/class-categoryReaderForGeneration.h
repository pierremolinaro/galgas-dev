#ifndef class_2D_categoryReaderForGeneration_DEFINED
#define class_2D_categoryReaderForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-categoryReaderForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalInputParameterListForGeneration.h"
#include "list-semanticInstructionListForGeneration.h"
#include "list-typedAttributeList.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @categoryReaderForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_categoryReaderForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mReceiverType ;
  public : GALGAS_string mAttribute_mCategoryReaderName ;
  public : GALGAS_bool mAttribute_mImplementedAsFunction ;
  public : GALGAS_unifiedTypeMapProxy mAttribute_mResultType ;
  public : GALGAS_string mAttribute_mResultVarCppName ;
  public : GALGAS_formalInputParameterListForGeneration mAttribute_mCategoryReaderFormalParameterList ;
  public : GALGAS_typedAttributeList mAttribute_mTypedAttributeList ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_categoryReaderForGeneration (const GALGAS_bool & in_mhasHeader,
                                             const GALGAS_string & in_mImplementationCppFileName,
                                             const GALGAS_unifiedTypeMapProxy & in_mReceiverType,
                                             const GALGAS_string & in_mCategoryReaderName,
                                             const GALGAS_bool & in_mImplementedAsFunction,
                                             const GALGAS_unifiedTypeMapProxy & in_mResultType,
                                             const GALGAS_string & in_mResultVarCppName,
                                             const GALGAS_formalInputParameterListForGeneration & in_mCategoryReaderFormalParameterList,
                                             const GALGAS_typedAttributeList & in_mTypedAttributeList,
                                             const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mReceiverType (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCategoryReaderName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mResultType (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mResultVarCppName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListForGeneration reader_mCategoryReaderFormalParameterList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedAttributeList reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

