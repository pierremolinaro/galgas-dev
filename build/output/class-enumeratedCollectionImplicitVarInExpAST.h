#ifndef class_2D_enumeratedCollectionImplicitVarInExpAST_DEFINED
#define class_2D_enumeratedCollectionImplicitVarInExpAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-enumeratedCollectionImplicitVarInExpAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @enumeratedCollectionImplicitVarInExpAST class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumeratedCollectionImplicitVarInExpAST : public cPtr_abstractEnumeratedCollectionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mPrefix ;
  public : GALGAS_semanticExpressionAST mAttribute_mEnumeratedExpression ;
  public : GALGAS_location mAttribute_mEndOfEnumerationExpression ;

//--- Constructor
  public : cPtr_enumeratedCollectionImplicitVarInExpAST (const GALGAS_lstring & in_mPrefix,
                                                         const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                         const GALGAS_location & in_mEndOfEnumerationExpression
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mPrefix (LOCATION_ARGS) const ;
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

