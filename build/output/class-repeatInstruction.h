#ifndef class_2D_repeatInstruction_DEFINED
#define class_2D_repeatInstruction_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-repeatInstruction-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-listOfSyntaxInstructionList.h"
#include "list-syntaxInstructionList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @repeatInstruction class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_repeatInstruction : public cPtr_syntaxInstructionAST {
//--- Attributes
  public : GALGAS_syntaxInstructionList mAttribute_mRepeatedInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  public : GALGAS_listOfSyntaxInstructionList mAttribute_mRepeatBranchList ;
  public : GALGAS_location mAttribute_mEndOf_5F_repeat_5F_instruction ;

//--- Constructor
  public : cPtr_repeatInstruction (const GALGAS_location & in_mInstructionLocation,
                                   const GALGAS_syntaxInstructionList & in_mRepeatedInstructionList,
                                   const GALGAS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                   const GALGAS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                   const GALGAS_location & in_mEndOf_5F_repeat_5F_instruction
                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxInstructionList reader_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_repeated_5F_instructions_5F_branch (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_listOfSyntaxInstructionList reader_mRepeatBranchList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_repeat_5F_instruction (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

