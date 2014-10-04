#ifndef class_2D_templateInstructionIfForGeneration_DEFINED
#define class_2D_templateInstructionIfForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateInstructionIfForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-templateInstructionIfBranchListForGeneration.h"
#include "list-templateInstructionListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @templateInstructionIfForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionIfForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes
  public : GALGAS_templateInstructionIfBranchListForGeneration mAttribute_mTemplateInstructionIfBranchList ;
  public : GALGAS_templateInstructionListForGeneration mAttribute_mElseInstructionList ;

//--- Constructor
  public : cPtr_templateInstructionIfForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
                                                    const GALGAS_templateInstructionListForGeneration & in_mElseInstructionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionIfBranchListForGeneration reader_mTemplateInstructionIfBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration reader_mElseInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

