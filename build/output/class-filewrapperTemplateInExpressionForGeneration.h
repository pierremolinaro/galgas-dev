#ifndef class_2D_filewrapperTemplateInExpressionForGeneration_DEFINED
#define class_2D_filewrapperTemplateInExpressionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-filewrapperTemplateInExpressionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-semanticExpressionListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Pointer class for @filewrapperTemplateInExpressionForGeneration class                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_filewrapperTemplateInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mFilewrapperName ;
  public : GALGAS_string mAttribute_mFilewrapperTemplateName ;
  public : GALGAS_semanticExpressionListForGeneration mAttribute_mActualOutputParameterList ;

//--- Constructor
  public : cPtr_filewrapperTemplateInExpressionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mResultType,
                                                              const GALGAS_location & in_mLocation,
                                                              const GALGAS_string & in_mFilewrapperName,
                                                              const GALGAS_string & in_mFilewrapperTemplateName,
                                                              const GALGAS_semanticExpressionListForGeneration & in_mActualOutputParameterList
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFilewrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration reader_mActualOutputParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

