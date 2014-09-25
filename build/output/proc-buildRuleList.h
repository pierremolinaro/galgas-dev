#ifndef proc_2D_buildRuleList_1_DEFINED
#define proc_2D_buildRuleList_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'buildRuleList'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildRuleList (const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument0,
                            const class GALGAS_lstring constinArgument1,
                            const class GALGAS_syntaxRuleListAST constinArgument2,
                            class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument3,
                            class GALGAS_syntaxComponentListForGrammarAnalysis & ioArgument4,
                            class GALGAS_uint & ioArgument5,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

