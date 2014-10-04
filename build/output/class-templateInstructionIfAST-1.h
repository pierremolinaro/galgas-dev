#ifndef class_2D_templateInstructionIfAST_1_DEFINED
#define class_2D_templateInstructionIfAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateInstructionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @templateInstructionIfAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateInstructionIfAST : public GALGAS_templateInstructionAST {
//--- Constructor
  public : GALGAS_templateInstructionIfAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateInstructionIfAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateInstructionIfAST * ptr (void) const { return (const cPtr_templateInstructionIfAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionIfAST (const cPtr_templateInstructionIfAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionIfAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateInstructionIfAST constructor_new (const class GALGAS_templateInstructionIfBranchListAST & inOperand0,
                                                                   const class GALGAS_templateInstructionListAST & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionIfAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST reader_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListAST reader_mTemplateInstructionIfBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionIfAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

