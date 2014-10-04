#ifndef class_2D_selectInstruction_1_DEFINED
#define class_2D_selectInstruction_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-syntaxInstructionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @selectInstruction class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selectInstruction : public GALGAS_syntaxInstructionAST {
//--- Constructor
  public : GALGAS_selectInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selectInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selectInstruction * ptr (void) const { return (const cPtr_selectInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selectInstruction (const cPtr_selectInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selectInstruction extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_selectInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                            const class GALGAS_listOfSyntaxInstructionList & inOperand1,
                                                            const class GALGAS_location & inOperand2
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selectInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOf_5F_select_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList reader_mSelectBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstruction ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

