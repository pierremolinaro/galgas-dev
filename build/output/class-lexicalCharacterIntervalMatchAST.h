#ifndef class_2D_lexicalCharacterIntervalMatchAST_DEFINED
#define class_2D_lexicalCharacterIntervalMatchAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-lexicalCharacterIntervalMatchAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @lexicalCharacterIntervalMatchAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalCharacterIntervalMatchAST : public cPtr_lexicalExpressionAST {
//--- Attributes
  public : GALGAS_lchar mAttribute_mLowerBound ;
  public : GALGAS_lchar mAttribute_mUpperBound ;

//--- Constructor
  public : cPtr_lexicalCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                  const GALGAS_lchar & in_mUpperBound
                                                  COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lchar reader_mLowerBound (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lchar reader_mUpperBound (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

