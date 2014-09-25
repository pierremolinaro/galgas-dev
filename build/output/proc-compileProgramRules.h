#ifndef proc_2D_compileProgramRules_1_DEFINED
#define proc_2D_compileProgramRules_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'compileProgramRules'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileProgramRules (const class GALGAS_analysisContext constinArgument0,
                                  const class GALGAS_programRuleList constinArgument1,
                                  class GALGAS_semanticDeclarationSortedListForGeneration & ioArgument2,
                                  class GALGAS_bool & ioArgument3,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

