#ifndef proc_2D_semanticAnalysisOfSyntaxComponent_1_DEFINED
#define proc_2D_semanticAnalysisOfSyntaxComponent_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'semanticAnalysisOfSyntaxComponent'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysisOfSyntaxComponent (const class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                                const class GALGAS_syntaxRuleListAST constinArgument1,
                                                const class GALGAS_string constinArgument2,
                                                const class GALGAS_string constinArgument3,
                                                const class GALGAS_semanticContext constinArgument4,
                                                const class GALGAS_predefinedTypes constinArgument5,
                                                const class GALGAS_terminalMap constinArgument6,
                                                const class GALGAS_stringset constinArgument7,
                                                const class GALGAS_bool constinArgument8,
                                                const class GALGAS_bool constinArgument9,
                                                class GALGAS_syntaxDeclarationForGeneration & outArgument10,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

