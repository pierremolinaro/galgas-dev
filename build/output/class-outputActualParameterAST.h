#ifndef class_2D_outputActualParameterAST_DEFINED
#define class_2D_outputActualParameterAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-outputActualParameterAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @outputActualParameterAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_outputActualParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualSelector ;
  public : GALGAS_semanticExpressionAST mAttribute_mOutputActualParameterExpression ;
  public : GALGAS_location mAttribute_mEndOfExpressionLocation ;

//--- Constructor
  public : cPtr_outputActualParameterAST (const GALGAS_location & in_mQualifierLocation,
                                          const GALGAS_lstring & in_mActualSelector,
                                          const GALGAS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                          const GALGAS_location & in_mEndOfExpressionLocation
                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualSelector (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mOutputActualParameterExpression (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

