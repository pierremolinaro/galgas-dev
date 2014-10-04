#ifndef class_2D_templateIfThenElseExpressionAST_DEFINED
#define class_2D_templateIfThenElseExpressionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateIfThenElseExpressionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateExpressionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @templateIfThenElseExpressionAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateIfThenElseExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_templateExpressionAST mAttribute_mIfExpression ;
  public : GALGAS_templateExpressionAST mAttribute_mThenExpression ;
  public : GALGAS_templateExpressionAST mAttribute_mElseExpression ;

//--- Constructor
  public : cPtr_templateIfThenElseExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                 const GALGAS_templateExpressionAST & in_mIfExpression,
                                                 const GALGAS_templateExpressionAST & in_mThenExpression,
                                                 const GALGAS_templateExpressionAST & in_mElseExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST reader_mIfExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST reader_mThenExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionAST reader_mElseExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

