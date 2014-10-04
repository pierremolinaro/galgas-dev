#ifndef class_2D_routineDeclarationAST_DEFINED
#define class_2D_routineDeclarationAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-routineDeclarationAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-semanticInstructionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @routineDeclarationAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_routineDeclarationAST : public cPtr_externRoutineDeclarationAST {
//--- Attributes
  public : GALGAS_semanticInstructionListAST mAttribute_mRoutineInstructionList ;
  public : GALGAS_location mAttribute_mEndOfRoutineInstructionList ;

//--- Constructor
  public : cPtr_routineDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                       const GALGAS_bool & in_mIsInternal,
                                       const GALGAS_lstring & in_mRoutineName,
                                       const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                       const GALGAS_semanticInstructionListAST & in_mRoutineInstructionList,
                                       const GALGAS_location & in_mEndOfRoutineInstructionList
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_mRoutineInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfRoutineInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

