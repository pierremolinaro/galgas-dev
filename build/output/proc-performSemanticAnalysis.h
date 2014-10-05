#ifndef proc_2D_performSemanticAnalysis_1_DEFINED
#define proc_2D_performSemanticAnalysis_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'performSemanticAnalysis'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performSemanticAnalysis (const class GALGAS_string constinArgument0,
                                      const class GALGAS_semanticDeclarationListAST constinArgument1,
                                      const class GALGAS_semanticContext constinArgument2,
                                      class GALGAS_semanticDeclarationSortedListForGeneration & outArgument3,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

