#ifndef class_2D_selfDecrementInstructionAST_DEFINED
#define class_2D_selfDecrementInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-selfDecrementInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @selfDecrementInstructionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfDecrementInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes

//--- Constructor
  public : cPtr_selfDecrementInstructionAST (const GALGAS_location & in_mInstructionLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

