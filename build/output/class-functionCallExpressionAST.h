#ifndef class_2D_functionCallExpressionAST_DEFINED
#define class_2D_functionCallExpressionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-functionCallExpressionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-actualOutputExpressionList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @functionCallExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionCallExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFunctionName ;
  public : GALGAS_actualOutputExpressionList mAttribute_mExpressionList ;

//--- Constructor
  public : cPtr_functionCallExpressionAST (const GALGAS_lstring & in_mFunctionName,
                                           const GALGAS_actualOutputExpressionList & in_mExpressionList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList reader_mExpressionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

