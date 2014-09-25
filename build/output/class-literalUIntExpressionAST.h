#ifndef class_2D_literalUIntExpressionAST_DEFINED
#define class_2D_literalUIntExpressionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-literalUIntExpressionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @literalUIntExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalUIntExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_luint mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalUIntExpressionAST (const GALGAS_luint & in_mValue
                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mValue (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

