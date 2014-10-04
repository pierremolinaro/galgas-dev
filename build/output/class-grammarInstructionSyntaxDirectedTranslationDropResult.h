#ifndef class_2D_grammarInstructionSyntaxDirectedTranslationDropResult_DEFINED
#define class_2D_grammarInstructionSyntaxDirectedTranslationDropResult_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-grammarInstructionSyntaxDirectedTranslationDropResult-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Pointer class for @grammarInstructionSyntaxDirectedTranslationDropResult class                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_grammarInstructionSyntaxDirectedTranslationDropResult : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Attributes
  public : GALGAS_location mAttribute_mLocation ;

//--- Constructor
  public : cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (const GALGAS_location & in_mLocation
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

