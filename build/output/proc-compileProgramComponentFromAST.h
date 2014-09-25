#ifndef proc_2D_compileProgramComponentFromAST_1_DEFINED
#define proc_2D_compileProgramComponentFromAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'compileProgramComponentFromAST'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileProgramComponentFromAST (const class GALGAS_lstring constinArgument0,
                                             const class GALGAS_string constinArgument1,
                                             const class GALGAS_programComponentAST constinArgument2,
                                             class GALGAS_parsedComponentStruct & ioArgument3,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

