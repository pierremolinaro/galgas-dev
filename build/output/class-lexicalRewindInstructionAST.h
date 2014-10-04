#ifndef class_2D_lexicalRewindInstructionAST_DEFINED
#define class_2D_lexicalRewindInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-lexicalRewindInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @lexicalRewindInstructionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalRewindInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLexicalTagName ;
  public : GALGAS_lstring mAttribute_mTerminalName ;

//--- Constructor
  public : cPtr_lexicalRewindInstructionAST (const GALGAS_lstring & in_mLexicalTagName,
                                             const GALGAS_lstring & in_mTerminalName
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLexicalTagName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTerminalName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

