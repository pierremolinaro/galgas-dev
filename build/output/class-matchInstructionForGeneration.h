//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    File 'class-matchInstructionForGeneration.h'                                     *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_matchInstructionForGeneration_DEFINED
#define class_2D_matchInstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-matchInstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-matchInstructionBranchListForGeneration.h"
#include "list-semanticExpressionListForGeneration.h"
#include "list-semanticInstructionListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @matchInstructionForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_matchInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionListForGeneration mAttribute_mMatchedExpressionList ;
  public : GALGAS_matchInstructionBranchListForGeneration mAttribute_mMatchInstructionBranchList ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mElseInstructionList ;

//--- Constructor
  public : cPtr_matchInstructionForGeneration (const GALGAS_semanticExpressionListForGeneration & in_mMatchedExpressionList,
                                               const GALGAS_matchInstructionBranchListForGeneration & in_mMatchInstructionBranchList,
                                               const GALGAS_semanticInstructionListForGeneration & in_mElseInstructionList
                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration reader_mMatchedExpressionList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_matchInstructionBranchListForGeneration reader_mMatchInstructionBranchList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const ;
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

