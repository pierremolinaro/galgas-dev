//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 File 'class-abstractCategoryReaderForGeneration.h'                                  *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_abstractCategoryReaderForGeneration_DEFINED
#define class_2D_abstractCategoryReaderForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractCategoryReaderForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalInputParameterListForGeneration.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @abstractCategoryReaderForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractCategoryReaderForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mReceiverType ;
  public : GALGAS_string mAttribute_mAbstractCategoryReaderName ;
  public : GALGAS_unifiedTypeMapProxy mAttribute_mResultType ;
  public : GALGAS_formalInputParameterListForGeneration mAttribute_mAbstractCategoryReaderFormalParameterList ;

//--- Constructor
  public : cPtr_abstractCategoryReaderForGeneration (const GALGAS_bool & in_mhasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_unifiedTypeMapProxy & in_mReceiverType,
                                                     const GALGAS_string & in_mAbstractCategoryReaderName,
                                                     const GALGAS_unifiedTypeMapProxy & in_mResultType,
                                                     const GALGAS_formalInputParameterListForGeneration & in_mAbstractCategoryReaderFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mReceiverType (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mAbstractCategoryReaderName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mResultType (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListForGeneration reader_mAbstractCategoryReaderFormalParameterList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

