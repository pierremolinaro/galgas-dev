#ifndef class_2D_literalUInt_36__34_ExpressionAST_DEFINED
#define class_2D_literalUInt_36__34_ExpressionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-literalUInt64ExpressionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @literalUInt64ExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalUInt_36__34_ExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_luint_36__34_ mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalUInt_36__34_ExpressionAST (const GALGAS_luint_36__34_ & in_mValue
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint_36__34_ reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

