//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     File 'class-logInstructionForGeneration.h'                                      *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_logInstructionForGeneration_DEFINED
#define class_2D_logInstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-logInstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @logInstructionForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_logInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLogMessage ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLogExpression ;

//--- Constructor
  public : cPtr_logInstructionForGeneration (const GALGAS_lstring & in_mLogMessage,
                                             const GALGAS_semanticExpressionForGeneration & in_mLogExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLogMessage (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLogExpression (UNUSED_LOCATION_ARGS) const ;
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

