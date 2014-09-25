#ifndef class_2D_parseRewindInstruction_1_DEFINED
#define class_2D_parseRewindInstruction_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-syntaxInstructionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @parseRewindInstruction class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_parseRewindInstruction : public GALGAS_syntaxInstructionAST {
//--- Constructor
  public : GALGAS_parseRewindInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_parseRewindInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_parseRewindInstruction * ptr (void) const { return (const cPtr_parseRewindInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_parseRewindInstruction (const cPtr_parseRewindInstruction * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_parseRewindInstruction extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_parseRewindInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_listOfSyntaxInstructionList & inOperand1,
                                                                 const class GALGAS_location & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_parseRewindInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfParseDoInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList reader_mParseRewindBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseRewindInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseRewindInstruction ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

