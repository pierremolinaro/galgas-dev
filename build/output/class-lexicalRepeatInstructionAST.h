#ifndef class_2D_lexicalRepeatInstructionAST_DEFINED
#define class_2D_lexicalRepeatInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-lexicalRepeatInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-lexicalInstructionListAST.h"
#include "list-lexicalWhileBranchListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @lexicalRepeatInstructionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalRepeatInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lexicalInstructionListAST mAttribute_mRepeatedInstructionList ;
  public : GALGAS_lexicalWhileBranchListAST mAttribute_mLexicalWhileBranchList ;

//--- Constructor
  public : cPtr_lexicalRepeatInstructionAST (const GALGAS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                             const GALGAS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalInstructionListAST reader_mRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lexicalWhileBranchListAST reader_mLexicalWhileBranchList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

