#ifndef class_2D_dropInstructionAST_1_DEFINED
#define class_2D_dropInstructionAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticInstructionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @dropInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_dropInstructionAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_dropInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_dropInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_dropInstructionAST * ptr (void) const { return (const cPtr_dropInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_dropInstructionAST (const cPtr_dropInstructionAST * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dropInstructionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_dropInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                             const class GALGAS_lstringlist & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_dropInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mDropList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dropInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dropInstructionAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

