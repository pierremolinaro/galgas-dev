#ifndef proc_2D_analyzeConstructorInvocation_1_DEFINED
#define proc_2D_analyzeConstructorInvocation_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'analyzeConstructorInvocation'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeConstructorInvocation (const class GALGAS_unifiedTypeMapProxy constinArgument0,
                                           const class GALGAS_analysisContext constinArgument1,
                                           class GALGAS_variableMap & ioArgument2,
                                           const class GALGAS_lstring constinArgument3,
                                           const class GALGAS_lstring constinArgument4,
                                           const class GALGAS_actualOutputExpressionList constinArgument5,
                                           class GALGAS_unifiedTypeMapProxy & outArgument6,
                                           class GALGAS_unifiedTypeMapProxy & outArgument7,
                                           class GALGAS_semanticExpressionListForGeneration & outArgument8,
                                           class GALGAS_bool & outArgument9,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

