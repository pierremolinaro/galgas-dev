#ifndef class_2D_abstractCategoryMethodForGeneration_DEFINED
#define class_2D_abstractCategoryMethodForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractCategoryMethodForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalParameterListForGeneration.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @abstractCategoryMethodForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractCategoryMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mReceiverType ;
  public : GALGAS_string mAttribute_mAbstractCategoryMethodName ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mAbstractCategoryMethodFormalParameterList ;

//--- Constructor
  public : cPtr_abstractCategoryMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_unifiedTypeMapProxy & in_mReceiverType,
                                                     const GALGAS_string & in_mAbstractCategoryMethodName,
                                                     const GALGAS_formalParameterListForGeneration & in_mAbstractCategoryMethodFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mAbstractCategoryMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration reader_mAbstractCategoryMethodFormalParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

