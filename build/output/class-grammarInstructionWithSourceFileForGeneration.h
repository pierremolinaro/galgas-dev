#ifndef class_2D_grammarInstructionWithSourceFileForGeneration_DEFINED
#define class_2D_grammarInstructionWithSourceFileForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-grammarInstructionWithSourceFileForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionForGeneration.h"
#include "list-actualParameterListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @grammarInstructionWithSourceFileForGeneration class                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_grammarInstructionWithSourceFileForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;
  public : GALGAS_string mAttribute_mGrammarName ;
  public : GALGAS_string mAttribute_mLabelName ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mSourceFileExpression ;
  public : GALGAS_actualParameterListForGeneration mAttribute_mActualParameterList ;
  public : GALGAS_bool mAttribute_mGrammarHasTranslateFeature ;
  public : GALGAS_stringlist mAttribute_mAssignementList ;
  public : GALGAS_string mAttribute_mSyntaxDirectedTranslationResultVarName ;

//--- Constructor
  public : cPtr_grammarInstructionWithSourceFileForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                               const GALGAS_string & in_mGrammarName,
                                                               const GALGAS_string & in_mLabelName,
                                                               const GALGAS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                                               const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                               const GALGAS_bool & in_mGrammarHasTranslateFeature,
                                                               const GALGAS_stringlist & in_mAssignementList,
                                                               const GALGAS_string & in_mSyntaxDirectedTranslationResultVarName
                                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mInstructionLocation (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mGrammarName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLabelName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mSourceFileExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration reader_mActualParameterList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mGrammarHasTranslateFeature (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist reader_mAssignementList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mSyntaxDirectedTranslationResultVarName (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

