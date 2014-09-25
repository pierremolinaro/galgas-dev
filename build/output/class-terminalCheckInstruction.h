#ifndef class_2D_terminalCheckInstruction_DEFINED
#define class_2D_terminalCheckInstruction_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-terminalCheckInstruction-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractGrammarInstructionSyntaxDirectedTranslationResult.h"
#include "list-actualInputParameterListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @terminalCheckInstruction class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_terminalCheckInstruction : public cPtr_syntaxInstructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTerminalName ;
  public : GALGAS_actualInputParameterListAST mAttribute_mActualInputParameterList ;
  public : GALGAS_lstringlist mAttribute_mIndexingKeyList ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken ;

//--- Constructor
  public : cPtr_terminalCheckInstruction (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_lstring & in_mTerminalName,
                                          const GALGAS_actualInputParameterListAST & in_mActualInputParameterList,
                                          const GALGAS_lstringlist & in_mIndexingKeyList,
                                          const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                          const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken
                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTerminalName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualInputParameterListAST reader_mActualInputParameterList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mIndexingKeyList (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult reader_mGrammarInstructionSyntaxDirectedTranslationToken (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

