#ifndef class_2D_literalSIntExpressionAST_DEFINED
#define class_2D_literalSIntExpressionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-literalSIntExpressionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @literalSIntExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalSIntExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lsint mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalSIntExpressionAST (const GALGAS_lsint & in_mValue
                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lsint reader_mValue (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

