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

void routine_performSemanticAnalysis (const class GALGAS_semanticDeclarationListAST constinArgument0,
                                      const class GALGAS_semanticContext constinArgument1,
                                      class GALGAS_semanticDeclarationSortedListForGeneration & outArgument2,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

