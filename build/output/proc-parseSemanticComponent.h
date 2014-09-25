#ifndef proc_2D_parseSemanticComponent_1_DEFINED
#define proc_2D_parseSemanticComponent_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'parseSemanticComponent'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_parseSemanticComponent (const class GALGAS_lstring constinArgument0,
                                     class GALGAS_parsedComponentStruct & ioArgument1,
                                     class GALGAS_semanticsComponentAST & outArgument2,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

