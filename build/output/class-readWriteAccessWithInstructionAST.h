#ifndef class_2D_readWriteAccessWithInstructionAST_DEFINED
#define class_2D_readWriteAccessWithInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-readWriteAccessWithInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionAST.h"
#include "list-semanticInstructionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @readWriteAccessWithInstructionAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_readWriteAccessWithInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mPrefix ;
  public : GALGAS_lstring mAttribute_mReceiverName ;
  public : GALGAS_lstringlist mAttribute_mFieldList ;
  public : GALGAS_location mAttribute_mEndOfReceiverExpression ;
  public : GALGAS_semanticExpressionAST mAttribute_mKeyExpression ;
  public : GALGAS_location mAttribute_mEndOfKeyExpression ;
  public : GALGAS_lstring mAttribute_mSearchMethodNameForErrorSignaling ;
  public : GALGAS_semanticInstructionListAST mAttribute_m_5F_do_5F_Instructions ;
  public : GALGAS_location mAttribute_mEndOf_5F_do_5F_instructions ;
  public : GALGAS_semanticInstructionListAST mAttribute_m_5F_else_5F_Instructions ;
  public : GALGAS_location mAttribute_mEndOf_5F_else_5F_instructions ;

//--- Constructor
  public : cPtr_readWriteAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_lstring & in_mPrefix,
                                                   const GALGAS_lstring & in_mReceiverName,
                                                   const GALGAS_lstringlist & in_mFieldList,
                                                   const GALGAS_location & in_mEndOfReceiverExpression,
                                                   const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                                   const GALGAS_location & in_mEndOfKeyExpression,
                                                   const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                                   const GALGAS_semanticInstructionListAST & in_m_5F_do_5F_Instructions,
                                                   const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                                   const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_Instructions,
                                                   const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mPrefix (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mFieldList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mKeyExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfKeyExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mSearchMethodNameForErrorSignaling (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_m_5F_do_5F_Instructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_do_5F_instructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListAST reader_m_5F_else_5F_Instructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOf_5F_else_5F_instructions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

