#ifndef class_2D_templateInstructionSwitchAST_DEFINED
#define class_2D_templateInstructionSwitchAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateInstructionSwitchAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateExpressionAST.h"
#include "list-templateInstructionSwitchBranchListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @templateInstructionSwitchAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionSwitchAST : public cPtr_templateInstructionAST {
//--- Attributes
  public : GALGAS_templateExpressionAST mAttribute_mSwitchExpression ;
  public : GALGAS_location mAttribute_mSwitchExpressionEndLocation ;
  public : GALGAS_templateInstructionSwitchBranchListAST mAttribute_mTemplateInstructionSwitchBranchList ;

//--- Constructor
  public : cPtr_templateInstructionSwitchAST (const GALGAS_templateExpressionAST & in_mSwitchExpression,
                                              const GALGAS_location & in_mSwitchExpressionEndLocation,
                                              const GALGAS_templateInstructionSwitchBranchListAST & in_mTemplateInstructionSwitchBranchList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST reader_mSwitchExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mSwitchExpressionEndLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionSwitchBranchListAST reader_mTemplateInstructionSwitchBranchList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

