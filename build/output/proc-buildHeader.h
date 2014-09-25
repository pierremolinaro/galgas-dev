#ifndef proc_2D_buildHeader_1_DEFINED
#define proc_2D_buildHeader_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Routine 'buildHeader'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildHeader (const class GALGAS_headerCompositionMap constinArgument0,
                          const class GALGAS_string constinArgument1,
                          const class GALGAS_string constinArgument2,
                          class GALGAS_headerRepartitionMap & ioArgument3,
                          class GALGAS_string & ioArgument4,
                          class C_Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

