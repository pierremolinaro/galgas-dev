#ifndef class_2D_enumeratedCollectionCstListInExpAST_DEFINED
#define class_2D_enumeratedCollectionCstListInExpAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-enumeratedCollectionCstListInExpAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionAST.h"
#include "list-foreachInstructionEnumeratedObjectElementListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @enumeratedCollectionCstListInExpAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumeratedCollectionCstListInExpAST : public cPtr_abstractEnumeratedCollectionAST {
//--- Attributes
  public : GALGAS_foreachInstructionEnumeratedObjectElementListAST mAttribute_mElementList ;
  public : GALGAS_bool mAttribute_mEndsWithEllipsis ;
  public : GALGAS_semanticExpressionAST mAttribute_mEnumeratedExpression ;
  public : GALGAS_location mAttribute_mEndOfEnumerationExpression ;

//--- Constructor
  public : cPtr_enumeratedCollectionCstListInExpAST (const GALGAS_foreachInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                     const GALGAS_bool & in_mEndsWithEllipsis,
                                                     const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                     const GALGAS_location & in_mEndOfEnumerationExpression
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_foreachInstructionEnumeratedObjectElementListAST reader_mElementList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mEndsWithEllipsis (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mEnumeratedExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfEnumerationExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

