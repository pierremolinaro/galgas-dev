#ifndef class_2D_templateOptionAccessAST_DEFINED
#define class_2D_templateOptionAccessAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateOptionAccessAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @templateOptionAccessAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateOptionAccessAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mOptionComponentName ;
  public : GALGAS_lstring mAttribute_mOptionName ;
  public : GALGAS_lstring mAttribute_mReaderName ;

//--- Constructor
  public : cPtr_templateOptionAccessAST (const GALGAS_lstring & in_mOptionComponentName,
                                         const GALGAS_lstring & in_mOptionName,
                                         const GALGAS_lstring & in_mReaderName
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOptionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mReaderName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

