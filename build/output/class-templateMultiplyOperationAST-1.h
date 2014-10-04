#ifndef class_2D_templateMultiplyOperationAST_1_DEFINED
#define class_2D_templateMultiplyOperationAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateExpressionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @templateMultiplyOperationAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateMultiplyOperationAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateMultiplyOperationAST (void) ;

//---
  public : inline const class cPtr_templateMultiplyOperationAST * ptr (void) const { return (const cPtr_templateMultiplyOperationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateMultiplyOperationAST (const cPtr_templateMultiplyOperationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateMultiplyOperationAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateMultiplyOperationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_templateExpressionAST & inOperand1,
                                                                       const class GALGAS_templateExpressionAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateMultiplyOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateMultiplyOperationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateMultiplyOperationAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

