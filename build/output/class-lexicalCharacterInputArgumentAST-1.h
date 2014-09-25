#ifndef class_2D_lexicalCharacterInputArgumentAST_1_DEFINED
#define class_2D_lexicalCharacterInputArgumentAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-lexicalRoutineOrFunctionFormalInputArgumentAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalCharacterInputArgumentAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalCharacterInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Constructor
  public : GALGAS_lexicalCharacterInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexicalCharacterInputArgumentAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexicalCharacterInputArgumentAST * ptr (void) const { return (const cPtr_lexicalCharacterInputArgumentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexicalCharacterInputArgumentAST (const cPtr_lexicalCharacterInputArgumentAST * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalCharacterInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalCharacterInputArgumentAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lchar reader_mCharacter (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterInputArgumentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

