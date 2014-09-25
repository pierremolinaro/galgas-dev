#ifndef class_2D_parseRewindInstructionForGeneration_DEFINED
#define class_2D_parseRewindInstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-parseRewindInstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-listOfSemanticInstructionListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @parseRewindInstructionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_parseRewindInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {
//--- Attributes
  public : GALGAS_listOfSemanticInstructionListForGeneration mAttribute_mListOfSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_parseRewindInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_listOfSemanticInstructionListForGeneration reader_mListOfSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

