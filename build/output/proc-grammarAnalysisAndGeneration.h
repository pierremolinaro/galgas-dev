#ifndef proc_2D_grammarAnalysisAndGeneration_1_DEFINED
#define proc_2D_grammarAnalysisAndGeneration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'grammarAnalysisAndGeneration'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_grammarAnalysisAndGeneration (const class GALGAS_stringset constinArgument0,
                                           const class GALGAS_lstring constinArgument1,
                                           const class GALGAS_lstring constinArgument2,
                                           const class GALGAS_uint constinArgument3,
                                           const class GALGAS_string constinArgument4,
                                           const class GALGAS_terminalSymbolsMapForGrammarAnalysis constinArgument5,
                                           const class GALGAS_syntaxComponentListForGrammarAnalysis constinArgument6,
                                           const class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis constinArgument7,
                                           const class GALGAS_string constinArgument8,
                                           const class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis constinArgument9,
                                           const class GALGAS_bool constinArgument10,
                                           const class GALGAS_string constinArgument11,
                                           class GALGAS_string & outArgument12,
                                           class GALGAS_string & outArgument13,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

