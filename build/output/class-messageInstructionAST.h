//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        File 'class-messageInstructionAST.h'                                         *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_messageInstructionAST_DEFINED
#define class_2D_messageInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-messageInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @messageInstructionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_messageInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_semanticExpressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_messageInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                       const GALGAS_semanticExpressionAST & in_mExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionAST reader_mExpression (UNUSED_LOCATION_ARGS) const ;
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

