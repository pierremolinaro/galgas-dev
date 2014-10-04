#ifndef class_2D_templateLiteralDoubleExpressionAST_1_DEFINED
#define class_2D_templateLiteralDoubleExpressionAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateExpressionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateLiteralDoubleExpressionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateLiteralDoubleExpressionAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateLiteralDoubleExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateLiteralDoubleExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateLiteralDoubleExpressionAST * ptr (void) const { return (const cPtr_templateLiteralDoubleExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateLiteralDoubleExpressionAST (const cPtr_templateLiteralDoubleExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateLiteralDoubleExpressionAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateLiteralDoubleExpressionAST constructor_new (const class GALGAS_ldouble & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateLiteralDoubleExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ldouble reader_mLiteralDouble (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralDoubleExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

