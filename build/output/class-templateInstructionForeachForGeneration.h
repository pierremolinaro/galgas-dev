#ifndef class_2D_templateInstructionForeachForGeneration_DEFINED
#define class_2D_templateInstructionForeachForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateInstructionForeachForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionForGeneration.h"
#include "list-templateInstructionListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @templateInstructionForeachForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionForeachForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsAscending ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mExpression ;
  public : GALGAS_string mAttribute_mEnumeratorCppName ;
  public : GALGAS_templateInstructionListForGeneration mAttribute_mBeforeInstructionList ;
  public : GALGAS_templateInstructionListForGeneration mAttribute_mDoInstructionList ;
  public : GALGAS_string mAttribute_mIndexCppName ;
  public : GALGAS_templateInstructionListForGeneration mAttribute_mBetweenInstructionList ;
  public : GALGAS_templateInstructionListForGeneration mAttribute_mAfterInstructionList ;

//--- Constructor
  public : cPtr_templateInstructionForeachForGeneration (const GALGAS_bool & in_mIsAscending,
                                                         const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                         const GALGAS_string & in_mEnumeratorCppName,
                                                         const GALGAS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                         const GALGAS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                         const GALGAS_string & in_mIndexCppName,
                                                         const GALGAS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                         const GALGAS_templateInstructionListForGeneration & in_mAfterInstructionList
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsAscending (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mEnumeratorCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration reader_mBeforeInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration reader_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mIndexCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration reader_mBetweenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration reader_mAfterInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

