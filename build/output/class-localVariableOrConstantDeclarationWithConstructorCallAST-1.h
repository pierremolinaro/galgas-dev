#ifndef class_2D_localVariableOrConstantDeclarationWithConstructorCallAST_1_DEFINED
#define class_2D_localVariableOrConstantDeclarationWithConstructorCallAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticInstructionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           @localVariableOrConstantDeclarationWithConstructorCallAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST : public GALGAS_semanticInstructionAST {
//--- Constructor
  public : GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_localVariableOrConstantDeclarationWithConstructorCallAST * ptr (void) const { return (const cPtr_localVariableOrConstantDeclarationWithConstructorCallAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST (const cPtr_localVariableOrConstantDeclarationWithConstructorCallAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST extractObject (const GALGAS_object & inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_bool & inOperand1,
                                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                                   const class GALGAS_lstring & inOperand3,
                                                                                                   const class GALGAS_lstring & inOperand4,
                                                                                                   const class GALGAS_actualOutputExpressionList & inOperand5
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList reader_mConstructorExpressions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mConstructorName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsConstant (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mVariableName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

