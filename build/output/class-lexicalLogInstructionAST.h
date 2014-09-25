#ifndef class_2D_lexicalLogInstructionAST_DEFINED
#define class_2D_lexicalLogInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-lexicalLogInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @lexicalLogInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalLogInstructionAST : public cPtr_lexicalInstructionAST {
//--- Attributes

//--- Constructor
  public : cPtr_lexicalLogInstructionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

