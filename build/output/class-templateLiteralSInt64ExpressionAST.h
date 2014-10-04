#ifndef class_2D_templateLiteralSInt_36__34_ExpressionAST_DEFINED
#define class_2D_templateLiteralSInt_36__34_ExpressionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateLiteralSInt64ExpressionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @templateLiteralSInt64ExpressionAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateLiteralSInt_36__34_ExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lsint_36__34_ mAttribute_mLiteralInt ;

//--- Constructor
  public : cPtr_templateLiteralSInt_36__34_ExpressionAST (const GALGAS_lsint_36__34_ & in_mLiteralInt
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lsint_36__34_ reader_mLiteralInt (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

