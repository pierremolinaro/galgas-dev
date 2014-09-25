#ifndef proc_2D_analyzeSyntaxInstructionList_1_DEFINED
#define proc_2D_analyzeSyntaxInstructionList_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'analyzeSyntaxInstructionList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSyntaxInstructionList (const class GALGAS_analysisContext constinArgument0,
                                           const class GALGAS_bool constinArgument1,
                                           const class GALGAS_terminalMap constinArgument2,
                                           const class GALGAS_string constinArgument3,
                                           const class GALGAS_nonterminalMap constinArgument4,
                                           const class GALGAS_string constinArgument5,
                                           const class GALGAS_syntaxInstructionList constinArgument6,
                                           const class GALGAS_location constinArgument7,
                                           const class GALGAS_stringset constinArgument8,
                                           class GALGAS_variableMap & ioArgument9,
                                           class GALGAS_uint & ioArgument10,
                                           class GALGAS_semanticInstructionListForGeneration & outArgument11,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

