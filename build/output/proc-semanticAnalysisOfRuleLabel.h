#ifndef proc_2D_semanticAnalysisOfRuleLabel_1_DEFINED
#define proc_2D_semanticAnalysisOfRuleLabel_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'semanticAnalysisOfRuleLabel'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysisOfRuleLabel (const class GALGAS_formalParameterListAST constinArgument0,
                                          const class GALGAS_syntaxInstructionList constinArgument1,
                                          const class GALGAS_analysisContext constinArgument2,
                                          const class GALGAS_terminalMap constinArgument3,
                                          const class GALGAS_bool constinArgument4,
                                          const class GALGAS_string constinArgument5,
                                          const class GALGAS_nonterminalMap constinArgument6,
                                          const class GALGAS_string constinArgument7,
                                          const class GALGAS_location constinArgument8,
                                          const class GALGAS_stringset constinArgument9,
                                          class GALGAS_uint & ioArgument10,
                                          class GALGAS_formalParameterListForGeneration & outArgument11,
                                          class GALGAS_formalParameterSignature & outArgument12,
                                          class GALGAS_semanticInstructionListForGeneration & outArgument13,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

