#ifndef class_2D_abstractCategoryModifierForGeneration_DEFINED
#define class_2D_abstractCategoryModifierForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractCategoryModifierForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalParameterListForGeneration.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @abstractCategoryModifierForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractCategoryModifierForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mReceiverType ;
  public : GALGAS_string mAttribute_mAbstractCategoryModifierName ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mAbstractCategoryModifierFormalParameterList ;

//--- Constructor
  public : cPtr_abstractCategoryModifierForGeneration (const GALGAS_bool & in_mhasHeader,
                                                       const GALGAS_string & in_mImplementationCppFileName,
                                                       const GALGAS_unifiedTypeMapProxy & in_mReceiverType,
                                                       const GALGAS_string & in_mAbstractCategoryModifierName,
                                                       const GALGAS_formalParameterListForGeneration & in_mAbstractCategoryModifierFormalParameterList
                                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mReceiverType (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mAbstractCategoryModifierName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration reader_mAbstractCategoryModifierFormalParameterList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

