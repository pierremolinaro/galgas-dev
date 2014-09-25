#ifndef class_2D_matchInstructionAST_1_DEFINED
#define class_2D_matchInstructionAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticInstructionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @matchInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_matchInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_matchInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_matchInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_matchInstructionAST * ptr (void) const { return (const cPtr_matchInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_matchInstructionAST (const cPtr_matchInstructionAST * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_matchInstructionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_matchInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_semanticExpressionListAST & inOperand1,
                                                              const class GALGAS_matchInstructionBranchListAST & inOperand2,
                                                              const class GALGAS_semanticInstructionListAST & inOperand3,
                                                              const class GALGAS_location & inOperand4
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_matchInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_match_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_matchInstructionBranchListAST reader_mMatchInstructionBranchList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListAST reader_mMatchedExpressionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_matchInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_matchInstructionAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

