#ifndef class_2D_ifInstructionForGeneration_DEFINED
#define class_2D_ifInstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-ifInstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticExpressionForGeneration.h"
#include "list-semanticInstructionListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @ifInstructionForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ifInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mIFexpression ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_m_5F_then_5F_instructionList ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_m_5F_else_5F_instructionList ;

//--- Constructor
  public : cPtr_ifInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_semanticExpressionForGeneration & in_mIFexpression,
                                            const GALGAS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                            const GALGAS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mIFexpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_m_5F_then_5F_instructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_m_5F_else_5F_instructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

