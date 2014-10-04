#ifndef class_2D_terminalCheckInstructionForGeneration_DEFINED
#define class_2D_terminalCheckInstructionForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-terminalCheckInstructionForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractGrammarInstructionSyntaxDirectedTranslationResult.h"
#include "list-terminalCheckAssignementList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @terminalCheckInstructionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_terminalCheckInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTerminalName ;
  public : GALGAS_string mAttribute_mLexiqueIdentifier ;
  public : GALGAS_terminalCheckAssignementList mAttribute_mTerminalCheckAssignementList ;
  public : GALGAS_lstringlist mAttribute_mIndexingKeyList ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken ;

//--- Constructor
  public : cPtr_terminalCheckInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_lstring & in_mTerminalName,
                                                       const GALGAS_string & in_mLexiqueIdentifier,
                                                       const GALGAS_terminalCheckAssignementList & in_mTerminalCheckAssignementList,
                                                       const GALGAS_lstringlist & in_mIndexingKeyList,
                                                       const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                       const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTerminalName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLexiqueIdentifier (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_terminalCheckAssignementList reader_mTerminalCheckAssignementList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mIndexingKeyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationToken (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

