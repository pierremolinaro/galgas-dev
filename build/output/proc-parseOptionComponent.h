#ifndef proc_2D_parseOptionComponent_1_DEFINED
#define proc_2D_parseOptionComponent_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'parseOptionComponent'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_parseOptionComponent (const class GALGAS_lstring constinArgument0,
                                   class GALGAS_parsedComponentStruct & ioArgument1,
                                   class GALGAS_lstring & outArgument2,
                                   class GALGAS_commandLineOptionMap & outArgument3,
                                   class GALGAS_commandLineOptionMap & outArgument4,
                                   class GALGAS_commandLineOptionMap & outArgument5,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

