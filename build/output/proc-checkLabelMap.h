#ifndef proc_2D_checkLabelMap_1_DEFINED
#define proc_2D_checkLabelMap_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'checkLabelMap'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkLabelMap (const class GALGAS_location constinArgument0,
                            const class GALGAS_nonTerminalLabelListAST constinArgument1,
                            const class GALGAS_location constinArgument2,
                            const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument3,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

