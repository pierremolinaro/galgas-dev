#ifndef class_2D_lexicalTagInstructionAST_DEFINED
#define class_2D_lexicalTagInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-lexicalTagInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @lexicalTagInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalTagInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLexicalTagName ;

//--- Constructor
  public : cPtr_lexicalTagInstructionAST (const GALGAS_lstring & in_mLexicalTagName
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLexicalTagName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

