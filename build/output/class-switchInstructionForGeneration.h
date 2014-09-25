#ifndef class_2D_switchInstructionForGeneration_DEFINED
#define class_2D_switchInstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-switchInstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionForGeneration.h"
#include "list-switchBranchesForGeneration.h"
#include "mapproxy-unifiedTypeMapProxy.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @switchInstructionForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_switchInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMapProxy mAttribute_mEnumType ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mSwitchExpression ;
  public : GALGAS_switchBranchesForGeneration mAttribute_mBranches ;

//--- Constructor
  public : cPtr_switchInstructionForGeneration (const GALGAS_unifiedTypeMapProxy & in_mEnumType,
                                                const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                const GALGAS_switchBranchesForGeneration & in_mBranches
                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxy reader_mEnumType (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mSwitchExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_switchBranchesForGeneration reader_mBranches (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

