//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 File 'class-selfPlusEqualElementsInstructionAST.h'                                  *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_selfPlusEqualElementsInstructionAST_DEFINED
#define class_2D_selfPlusEqualElementsInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-selfPlusEqualElementsInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-actualOutputExpressionList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @selfPlusEqualElementsInstructionAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfPlusEqualElementsInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_actualOutputExpressionList mAttribute_mExpressions ;

//--- Constructor
  public : cPtr_selfPlusEqualElementsInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_actualOutputExpressionList & in_mExpressions
                                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList reader_mExpressions (UNUSED_LOCATION_ARGS) const ;
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

