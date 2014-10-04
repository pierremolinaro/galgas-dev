#ifndef class_2D_templateLiteralUIntExpressionAST_DEFINED
#define class_2D_templateLiteralUIntExpressionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateLiteralUIntExpressionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @templateLiteralUIntExpressionAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateLiteralUIntExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_luint mAttribute_mLiteralInt ;

//--- Constructor
  public : cPtr_templateLiteralUIntExpressionAST (const GALGAS_luint & in_mLiteralInt
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mLiteralInt (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

