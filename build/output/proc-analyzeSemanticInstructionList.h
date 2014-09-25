#ifndef proc_2D_analyzeSemanticInstructionList_1_DEFINED
#define proc_2D_analyzeSemanticInstructionList_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeSemanticInstructionList'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSemanticInstructionList (const class GALGAS_analysisContext constinArgument0,
                                             const class GALGAS_localConstantList constinArgument1,
                                             const class GALGAS_localInitializedVariableList constinArgument2,
                                             const class GALGAS_semanticInstructionListAST constinArgument3,
                                             const class GALGAS_location constinArgument4,
                                             class GALGAS_variableMap & ioArgument5,
                                             class GALGAS_semanticInstructionListForGeneration & outArgument6,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

