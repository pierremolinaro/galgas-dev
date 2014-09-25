#ifndef class_2D_templateInstructionGotoColumnLocationAST_DEFINED
#define class_2D_templateInstructionGotoColumnLocationAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateInstructionGotoColumnLocationAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @templateInstructionGotoColumnLocationAST class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateInstructionGotoColumnLocationAST : public cPtr_templateInstructionAST {
//--- Attributes

//--- Constructor
  public : cPtr_templateInstructionGotoColumnLocationAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

