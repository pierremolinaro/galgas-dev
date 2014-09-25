#ifndef class_2D_templateSupOrEqualTestAST_1_DEFINED
#define class_2D_templateSupOrEqualTestAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateExpressionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @templateSupOrEqualTestAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateSupOrEqualTestAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateSupOrEqualTestAST (void) ;

//---
  public : inline const class cPtr_templateSupOrEqualTestAST * ptr (void) const { return (const cPtr_templateSupOrEqualTestAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateSupOrEqualTestAST (const cPtr_templateSupOrEqualTestAST * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateSupOrEqualTestAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateSupOrEqualTestAST constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_templateExpressionAST & inOperand1,
                                                                    const class GALGAS_templateExpressionAST & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateSupOrEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateExpressionAST reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateSupOrEqualTestAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateSupOrEqualTestAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

