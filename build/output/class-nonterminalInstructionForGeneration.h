//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 File 'class-nonterminalInstructionForGeneration.h'                                  *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_nonterminalInstructionForGeneration_DEFINED
#define class_2D_nonterminalInstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-nonterminalInstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractGrammarInstructionSyntaxDirectedTranslationResult.h"
#include "list-actualParameterListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @nonterminalInstructionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_nonterminalInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mNonterminalName ;
  public : GALGAS_string mAttribute_mLabelName ;
  public : GALGAS_actualParameterListForGeneration mAttribute_mActualParameterList ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult ;

//--- Constructor
  public : cPtr_nonterminalInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_string & in_mNonterminalName,
                                                     const GALGAS_string & in_mLabelName,
                                                     const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                     const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult
                                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mNonterminalName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLabelName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration reader_mActualParameterList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const ;
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

