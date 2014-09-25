#ifndef proc_2D_analyzeErrorOrWarningInstruction_1_DEFINED
#define proc_2D_analyzeErrorOrWarningInstruction_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'analyzeErrorOrWarningInstruction'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeErrorOrWarningInstruction (const class GALGAS_analysisContext constinArgument0,
                                               const class GALGAS_semanticExpressionAST constinArgument1,
                                               const class GALGAS_semanticExpressionAST constinArgument2,
                                               const class GALGAS_location constinArgument3,
                                               const class GALGAS_string constinArgument4,
                                               class GALGAS_variableMap & ioArgument5,
                                               class GALGAS_semanticExpressionForGeneration & outArgument6,
                                               class GALGAS_semanticExpressionForGeneration & outArgument7,
                                               class GALGAS_bool & outArgument8,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

