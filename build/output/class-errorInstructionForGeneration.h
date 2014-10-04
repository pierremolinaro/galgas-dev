#ifndef class_2D_errorInstructionForGeneration_DEFINED
#define class_2D_errorInstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-errorInstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @errorInstructionForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_errorInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mReceiverExpression ;
  public : GALGAS_bool mAttribute_mUseLocationReader ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mErrorExpression ;
  public : GALGAS_stringlist mAttribute_mBuiltVariableCppNameList ;

//--- Constructor
  public : cPtr_errorInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                               const GALGAS_bool & in_mUseLocationReader,
                                               const GALGAS_semanticExpressionForGeneration & in_mErrorExpression,
                                               const GALGAS_stringlist & in_mBuiltVariableCppNameList
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mUseLocationReader (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mErrorExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist reader_mBuiltVariableCppNameList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

