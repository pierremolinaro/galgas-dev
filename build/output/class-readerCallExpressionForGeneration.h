#ifndef class_2D_readerCallExpressionForGeneration_DEFINED
#define class_2D_readerCallExpressionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-readerCallExpressionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionForGeneration.h"
#include "enum-methodKind.h"
#include "list-semanticExpressionListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @readerCallExpressionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_readerCallExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mReceiverExpression ;
  public : GALGAS_stringlist mAttribute_mFieldList ;
  public : GALGAS_string mAttribute_mReaderName ;
  public : GALGAS_semanticExpressionListForGeneration mAttribute_mExpressions ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;

//--- Constructor
  public : cPtr_readerCallExpressionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_methodKind & in_mKind,
                                                   const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                   const GALGAS_stringlist & in_mFieldList,
                                                   const GALGAS_string & in_mReaderName,
                                                   const GALGAS_semanticExpressionListForGeneration & in_mExpressions,
                                                   const GALGAS_bool & in_mHasCompilerArgument
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_methodKind reader_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist reader_mFieldList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mReaderName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration reader_mExpressions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasCompilerArgument (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

