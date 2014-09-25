#ifndef proc_2D_buildLocalVariableMapAndSignature_1_DEFINED
#define proc_2D_buildLocalVariableMapAndSignature_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'buildLocalVariableMapAndSignature'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLocalVariableMapAndSignature (const class GALGAS_semanticContext constinArgument0,
                                                const class GALGAS_formalParameterListAST constinArgument1,
                                                class GALGAS_variableMap & ioArgument2,
                                                class GALGAS_formalParameterListForGeneration & outArgument3,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

