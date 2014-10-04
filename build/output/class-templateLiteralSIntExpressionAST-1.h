#ifndef class_2D_templateLiteralSIntExpressionAST_1_DEFINED
#define class_2D_templateLiteralSIntExpressionAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateExpressionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @templateLiteralSIntExpressionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateLiteralSIntExpressionAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateLiteralSIntExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateLiteralSIntExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateLiteralSIntExpressionAST * ptr (void) const { return (const cPtr_templateLiteralSIntExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateLiteralSIntExpressionAST (const cPtr_templateLiteralSIntExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateLiteralSIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateLiteralSIntExpressionAST constructor_new (const class GALGAS_lsint & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateLiteralSIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lsint reader_mLiteralInt (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralSIntExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

