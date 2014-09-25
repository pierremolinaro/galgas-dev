#ifndef proc_2D_transformInstructionList_1_DEFINED
#define proc_2D_transformInstructionList_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'transformInstructionList'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_transformInstructionList (const class GALGAS_syntaxInstructionList constinArgument0,
                                       class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument1,
                                       const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument2,
                                       class GALGAS_uint & ioArgument3,
                                       class GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument4,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

