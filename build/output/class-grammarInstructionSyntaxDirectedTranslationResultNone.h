#ifndef class_2D_grammarInstructionSyntaxDirectedTranslationResultNone_DEFINED
#define class_2D_grammarInstructionSyntaxDirectedTranslationResultNone_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-grammarInstructionSyntaxDirectedTranslationResultNone-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Pointer class for @grammarInstructionSyntaxDirectedTranslationResultNone class                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_grammarInstructionSyntaxDirectedTranslationResultNone : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--- Attributes

//--- Constructor
  public : cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

