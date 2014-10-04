#ifndef class_2D_templateFunctionCallAST_DEFINED
#define class_2D_templateFunctionCallAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateFunctionCallAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-templateExpressionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @templateFunctionCallAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateFunctionCallAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFunctionName ;
  public : GALGAS_templateExpressionListAST mAttribute_mExpressionList ;

//--- Constructor
  public : cPtr_templateFunctionCallAST (const GALGAS_lstring & in_mFunctionName,
                                         const GALGAS_templateExpressionListAST & in_mExpressionList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateExpressionListAST reader_mExpressionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

