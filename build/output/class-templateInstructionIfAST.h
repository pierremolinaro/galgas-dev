#ifndef class_2D_templateInstructionIfAST_DEFINED
#define class_2D_templateInstructionIfAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateInstructionIfAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-templateInstructionIfBranchListAST.h"
#include "list-templateInstructionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @templateInstructionIfAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionIfAST : public cPtr_templateInstructionAST {
//--- Attributes
  public : GALGAS_templateInstructionIfBranchListAST mAttribute_mTemplateInstructionIfBranchList ;
  public : GALGAS_templateInstructionListAST mAttribute_mElseInstructionList ;

//--- Constructor
  public : cPtr_templateInstructionIfAST (const GALGAS_templateInstructionIfBranchListAST & in_mTemplateInstructionIfBranchList,
                                          const GALGAS_templateInstructionListAST & in_mElseInstructionList
                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionIfBranchListAST reader_mTemplateInstructionIfBranchList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListAST reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

