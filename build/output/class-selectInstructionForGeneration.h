#ifndef class_2D_selectInstructionForGeneration_DEFINED
#define class_2D_selectInstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-selectInstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-listOfSemanticInstructionListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @selectInstructionForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selectInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mSyntaxComponentName ;
  public : GALGAS_uint mAttribute_mChoiceIndex ;
  public : GALGAS_listOfSemanticInstructionListForGeneration mAttribute_mListOfSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_selectInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_string & in_mSyntaxComponentName,
                                                const GALGAS_uint & in_mChoiceIndex,
                                                const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mChoiceIndex (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_listOfSemanticInstructionListForGeneration reader_mListOfSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

