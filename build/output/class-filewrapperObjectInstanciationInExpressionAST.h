#ifndef class_2D_filewrapperObjectInstanciationInExpressionAST_DEFINED
#define class_2D_filewrapperObjectInstanciationInExpressionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-filewrapperObjectInstanciationInExpressionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @filewrapperObjectInstanciationInExpressionAST class                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_filewrapperObjectInstanciationInExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFilewrapperName ;

//--- Constructor
  public : cPtr_filewrapperObjectInstanciationInExpressionAST (const GALGAS_lstring & in_mFilewrapperName
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mFilewrapperName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

