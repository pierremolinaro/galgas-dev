#ifndef class_2D_selfPlusEqualElementsInstructionAST_1_DEFINED
#define class_2D_selfPlusEqualElementsInstructionAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticInstructionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @selfPlusEqualElementsInstructionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selfPlusEqualElementsInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_selfPlusEqualElementsInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selfPlusEqualElementsInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selfPlusEqualElementsInstructionAST * ptr (void) const { return (const cPtr_selfPlusEqualElementsInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfPlusEqualElementsInstructionAST (const cPtr_selfPlusEqualElementsInstructionAST * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfPlusEqualElementsInstructionAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_selfPlusEqualElementsInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_actualOutputExpressionList & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfPlusEqualElementsInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList reader_mExpressions (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfPlusEqualElementsInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

