#ifndef class_2D_methodCallInstructionAST_DEFINED
#define class_2D_methodCallInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-methodCallInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionAST.h"
#include "list-actualParameterListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @methodCallInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_methodCallInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mReceiverExpression ;
  public : GALGAS_lstring mAttribute_mMethodName ;
  public : GALGAS_actualParameterListAST mAttribute_mActualParameterList ;

//--- Constructor
  public : cPtr_methodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                          const GALGAS_lstring & in_mMethodName,
                                          const GALGAS_actualParameterListAST & in_mActualParameterList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListAST reader_mActualParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

