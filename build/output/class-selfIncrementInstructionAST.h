//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     File 'class-selfIncrementInstructionAST.h'                                      *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_selfIncrementInstructionAST_DEFINED
#define class_2D_selfIncrementInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-selfIncrementInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @selfIncrementInstructionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfIncrementInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes

//--- Constructor
  public : cPtr_selfIncrementInstructionAST (const GALGAS_location & in_mInstructionLocation
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

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

