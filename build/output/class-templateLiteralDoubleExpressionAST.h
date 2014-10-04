#ifndef class_2D_templateLiteralDoubleExpressionAST_DEFINED
#define class_2D_templateLiteralDoubleExpressionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateLiteralDoubleExpressionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @templateLiteralDoubleExpressionAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateLiteralDoubleExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_ldouble mAttribute_mLiteralDouble ;

//--- Constructor
  public : cPtr_templateLiteralDoubleExpressionAST (const GALGAS_ldouble & in_mLiteralDouble
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ldouble reader_mLiteralDouble (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

