#ifndef class_2D_optionExpressionAST_DEFINED
#define class_2D_optionExpressionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-optionExpressionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @optionExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_optionExpressionAST : public cPtr_semanticExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mOptionComponentName ;
  public : GALGAS_lstring mAttribute_mOptionEntryName ;
  public : GALGAS_lstring mAttribute_mOptionReaderName ;

//--- Constructor
  public : cPtr_optionExpressionAST (const GALGAS_lstring & in_mOptionComponentName,
                                     const GALGAS_lstring & in_mOptionEntryName,
                                     const GALGAS_lstring & in_mOptionReaderName
                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOptionComponentName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOptionEntryName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOptionReaderName (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

