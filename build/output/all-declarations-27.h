#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-26.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Routine 'analyzeErrorOrWarningInstruction'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeErrorOrWarningInstruction (const class GALGAS_lstring constinArgument0,
                                               class GALGAS_usefulEntitiesGraph & ioArgument1,
                                               const class GALGAS_analysisContext constinArgument2,
                                               const class GALGAS_semanticExpressionAST constinArgument3,
                                               const class GALGAS_semanticExpressionAST constinArgument4,
                                               const class GALGAS_fixitListAST constinArgument5,
                                               const class GALGAS_location constinArgument6,
                                               const class GALGAS_string constinArgument7,
                                               class GALGAS_variableMap & ioArgument8,
                                               class GALGAS_semanticExpressionForGeneration & outArgument9,
                                               class GALGAS_semanticExpressionForGeneration & outArgument10,
                                               class GALGAS_fixitListForGeneration & outArgument11,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

